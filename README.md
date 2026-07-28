# CuriSense
An IoT and Machine Learning-Based Prototype for Real-Time Seizure Detection and Emergency Response


## Machine Learning and IoT-Based Prototype for Real-Time Seizure Detection and Emergency Response

CuriSense is a Machine Learning and IoT-based prototype designed to detect epileptic seizures in real time and provide immediate emergency alerts. The system continuously monitors the user's physiological parameters and body movements using wearable sensors. The collected data is processed using a trained Machine Learning model to identify seizure events. When a seizure is detected, the system activates a buzzer and sends an emergency alert through Telegram to caregivers.

---

# 📌 Project Objectives

- Detect seizures in real time using Machine Learning.
- Monitor heart rate and blood oxygen (SpO₂).
- Detect abnormal body movements.
- Send emergency notifications instantly.
- Improve patient safety through continuous monitoring.
- Cloud-based visualization using ThingSpeak
  
---

# ✨ Features

- Real-time seizure detection
- Optical pulse signal monitoring
- Motion detection using accelerometer and gyroscope
- Machine Learning-based prediction
- Telegram emergency alerts
- ThingSpeak cloud visualization
- Local buzzer alert
- Portable IoT prototype
- Data logging for future analysis

---

# 🛠 Hardware Components

- ESP32 DevKit V1
- MAX30102 Heart Rate & SpO₂ Sensor
- MPU6050 Accelerometer and Gyroscope Sensor
- Active Buzzer
- Zero PCB
- Jumper Wires
- USB Cable

---

# 💻 Software and Tools

- Python
- Arduino IDE
- Visual Studio Code
- Jupyter Notebook
- Git & GitHub
- Telegram Bot API
- Thingspeak
  

# 🧠 Machine Learning

The seizure detection model is trained using physiological and motion data collected from wearable sensors.

## Dataset Classes

- Walking
- Standing
- Sitting
- Arm Shaking
- Jerky Movements

## Model
Algorithm:
- Random Forest Classifier

Input Features:
- Accelerometer X,Y,Z
- Gyroscope X,Y,Z
- IR Signal
- RED Signal

Output:
- Normal
- Seizure

# 📂 Repository Structure

```
CuriSense
│
├── AI_Model
│   ├── Datasets
│   ├── Trained Model
│
│
├── Arduino_Code
│
├── Python
│
├── Documentation
│
├── Images
│
├── Results
│
├── Videos
│
├── README.md
│
├── requirements.txt
│
└── LICENSE
```

---

# ⚙️ Working

1. Sensors collect physiological and motion data.
2. ESP32 reads the sensor values.
3. Sensor data is sent to the Python application.
4. The Machine Learning model predicts whether a seizure has occurred.
5. If a seizure is detected:
   - The buzzer is activated.
   - A Telegram alert is sent to the caregiver.
   - Upload prediction and sensor values to ThingSpeak
6. The collected data can be stored for future analysis.

---

# 🚀 Installation

## Clone the Repository

```bash[
(https://github.com/goodvaishnvi/CuriSense)
```

## Open the Project

```bash
cd CuriSense
```

## Install Required Libraries

```bash
Wire
SparkFun MAX3010x Pulse and Proximity Sensor Library (MAX30105)
Python Libraries
pyserial
pandas
numpy
scikit-learn
scipy
joblib
requests
```

# 📊 Results

The developed prototype successfully:

- Detects seizure-related movement patterns.
- Monitors heart rate and SpO₂ continuously.
- Generates Machine Learning predictions.
- Sends Telegram emergency notifications.
- Activates a buzzer during emergency conditions.

---

# 🎥 Demo Video

Watch the complete project demonstration here:

(https://www.youtube.com/watch?v=5udu0k3X_3w)



# 📁 Documentation

The repository includes:

- Project Report
- Circuit Diagram
- Flowchart
- Source Code
- Machine Learning Model
- Dataset
- Images


# 🔮 Future Scope

- Develop a wearable device with a compact PCB.
- Create an Android application for caregivers.
- Integrate cloud-based data storage.
- Improve prediction accuracy using larger datasets.
- Add GPS-based location tracking.
- Implement real-time health monitoring dashboard.

# 👥 Team Members

- Vaishnavi Surwase
- Sharwani Sawant
- Sanskar Malore

