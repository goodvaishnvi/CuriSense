#include <Wire.h>
#include "MAX30105.h"

MAX30105 particleSensor;

const int MPU = 0x68;
const int BUZZER_PIN = 25;

int16_t AcX, AcY, AcZ;
int16_t GyX, GyY, GyZ;

void setup()
{
  Serial.begin(115200);

  Wire.begin(21, 22);
  Wire.setClock(100000);

  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);

  // Wake MPU6050
  Wire.beginTransmission(MPU);
  Wire.write(0x6B);
  Wire.write(0);
  Wire.endTransmission(true);

  // Initialize MAX30102
  if (!particleSensor.begin(Wire, I2C_SPEED_STANDARD))
  {
    while (1);
  }

  particleSensor.setup();

  particleSensor.setPulseAmplitudeRed(0x3F);
  particleSensor.setPulseAmplitudeIR(0x3F);

  delay(1000);
}

void loop()
{
  // ---------------------------
  // Read MPU6050
  // ---------------------------
  Wire.beginTransmission(MPU);
  Wire.write(0x3B);
  Wire.endTransmission(false);

  Wire.requestFrom(MPU, 14, true);

  if (Wire.available() == 14)
  {
    AcX = Wire.read() << 8 | Wire.read();
    AcY = Wire.read() << 8 | Wire.read();
    AcZ = Wire.read() << 8 | Wire.read();

    Wire.read();
    Wire.read();

    GyX = Wire.read() << 8 | Wire.read();
    GyY = Wire.read() << 8 | Wire.read();
    GyZ = Wire.read() << 8 | Wire.read();

    long ir = particleSensor.getIR();
    long red = particleSensor.getRed();

    // Send data to Python
    Serial.print(millis());
    Serial.print(",");

    Serial.print(AcX);
    Serial.print(",");

    Serial.print(AcY);
    Serial.print(",");

    Serial.print(AcZ);
    Serial.print(",");

    Serial.print(GyX);
    Serial.print(",");

    Serial.print(GyY);
    Serial.print(",");

    Serial.print(GyZ);
    Serial.print(",");

    Serial.print(ir);
    Serial.print(",");

    Serial.println(red);
  }

  // ---------------------------
  // Listen for Python command
  // ---------------------------
  if (Serial.available())
  {
    char c = Serial.read();

    if (c == '1')
    {
      digitalWrite(BUZZER_PIN, HIGH);
    }
    else if (c == '0')
    {
      digitalWrite(BUZZER_PIN, LOW);
    }
  }

  delay(100);
}
