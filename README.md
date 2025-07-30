<div align="center">

# 🔧 Arduino Projects Collection

<img src="https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white" alt="Arduino">
<img src="https://img.shields.io/badge/PlatformIO-FF7F00?style=for-the-badge&logo=data:image/svg+xml;base64,PHN2ZyB3aWR0aD0iMjUwMCIgaGVpZ2h0PSIyNTAwIiB2aWV3Qm94PSIwIDAgMjU2IDI1NiIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIiBwcmVzZXJ2ZUFzcGVjdFJhdGlvPSJ4TWlkWU1pZCI+PHBhdGggZD0iTTEyOCAwQzU3LjMgMCAwIDU3LjMgMCAxMjhzNTcuMyAxMjggMTI4IDEyOCAxMjgtNTcuMyAxMjgtMTI4UzE5OC43IDAgMTI4IDB6bTAgMjM3LjNjLTYwLjIgMC0xMDkuMy00OS4xLTEwOS4zLTEwOS4zUzY3LjggMTguNyAxMjggMTguN3MxMDkuMyA0OS4xIDEwOS4zIDEwOS4zUzE4OC4yIDIzNy4zIDEyOCAyMzcuM3oiIGZpbGw9IiNmZmYiLz48L3N2Zz4K&logoColor=white" alt="PlatformIO">
<img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++">

<br>

<h3>🚀 A collection of embedded systems projects</h3>

<p>
<strong>15+ Projects</strong> • <strong>3 Categories</strong> • <strong>Multiple Hardware Interfaces</strong> • <strong>State Machine Implementation</strong>
</p>

<hr style="width: 50%; margin: 20px auto;">

</div>

<br>

**A comprehensive collection of embedded systems projects developed using Arduino and PlatformIO, covering various sensors, displays, communication protocols, and advanced programming concepts.**

<div align="center">

## 📑 Table of Contents

</div>

<table align="center">
<tr>
<td>

**🛠️ Setup & Environment**
- [Development Environment](#️-development-environment)
- [Project Categories](#-project-categories)
- [Getting Started](#-getting-started)

</td>
<td>

**🔌 Hardware Projects**
- [LED Control & Display](#-led-control--display)
- [Sensors & Monitoring](#️-sensors--monitoring)
- [Audio & Sound](#-audio--sound)

</td>
<td>

**⚡ Advanced Features**
- [User Input & Control](#️-user-input--control)
- [Display Technologies](#-display-technologies)
- [Communication & Protocols](#-communication--protocols)

</td>
</tr>
</table>

<div align="center">

---

</div>

## 🛠️ Development Environment

<div align="center">
<table>
<tr>
<td align="center">
<img src="https://img.shields.io/badge/Platform-PlatformIO-orange?style=flat-square&logo=data:image/svg+xml;base64,PHN2ZyB3aWR0aD0iMjUwMCIgaGVpZ2h0PSIyNTAwIiB2aWV3Qm94PSIwIDAgMjU2IDI1NiIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIiBwcmVzZXJ2ZUFzcGVjdFJhdGlvPSJ4TWlkWU1pZCI+PHBhdGggZD0iTTEyOCAwQzU3LjMgMCAwIDU3LjMgMCAxMjhzNTcuMyAxMjggMTI4IDEyOCAxMjgtNTcuMyAxMjgtMTI4UzE5OC43IDAgMTI4IDB6bTAgMjM3LjNjLTYwLjIgMC0xMDkuMy00OS4xLTEwOS4zLTEwOS4zUzY3LjggMTguNyAxMjggMTguN3MxMDkuMyA0OS4xIDEwOS4zIDEwOS4zUzE4OC4yIDIzNy4zIDEyOCAyMzcuM3oiIGZpbGw9IiNmZmYiLz48L3N2Zz4K">
<br><strong>PlatformIO</strong>
</td>
<td align="center">
<img src="https://img.shields.io/badge/Target-Arduino_UNO-blue?style=flat-square&logo=arduino">
<br><strong>Arduino UNO R3</strong>
</td>
<td align="center">
<img src="https://img.shields.io/badge/Language-C%2B%2B-red?style=flat-square&logo=c%2B%2B">
<br><strong>C++ Arduino</strong>
</td>
</tr>
</table>
</div>

All projects are developed using **PlatformIO** with the Arduino framework, providing:

<div align="center">

| Feature | Description |
|---------|-------------|
| 🌐 **Cross-platform** | Works on Windows, macOS, Linux |
| 📦 **Dependency Management** | Automatic library handling |
| 🔧 **Professional Build** | Advanced build system |
| 📊 **Serial Monitoring** | Real-time debugging |

</div>

---

## 📁 Project Categories

<div align="center">

<table>
<tr>
<td align="center" width="33%">
<h3>🔧 Other</h3>
<p><strong>Fundamental Projects</strong></p>
<p>Sensor and actuator basics</p>
<img src="https://img.shields.io/badge/Projects-4-green?style=flat-square">
</td>
<td align="center" width="33%">
<h3>📚 YT Lesson</h3>
<p><strong>Tutorial Projects</strong></p>
<p>Learning-focused implementations</p>
<img src="https://img.shields.io/badge/Projects-10-blue?style=flat-square">
</td>
<td align="center" width="33%">
<h3>🎓 UML Course</h3>
<p><strong>Advanced Projects</strong></p>
<p>State machine implementations</p>
<img src="https://img.shields.io/badge/Projects-1-purple?style=flat-square">
</td>
</tr>
</table>

</div>

---

## 🔌 Hardware Projects

### 💡 LED Control & Display

<details>
<summary><b>🔵 7-Segment Display Controller</b></summary>

**Location**: `YT Lesson/7segment/`

**Description**: Controls a 7-segment display using the 74HC595 shift register IC

**Features**: 
- ✅ Common cathode display support
- ✅ Shift register cascading
- ✅ Digit pattern mapping (0-9)

**Hardware**: `74HC595`, `7-segment display`

</details>

<details>
<summary><b>🔵 4-Digit 7-Segment Interface</b></summary>

**Location**: `YT Lesson/4_Digit_7Segment/`

**Description**: Basic input handling with button debouncing

**Features**:
- ✅ Pull-up resistor implementation
- ✅ Digital input processing
- ✅ LED status indication

</details>

<details>
<summary><b>🔵 Shift Register LED Array</b></summary>

**Location**: `Other/Shift_Register_LED/`

**Description**: LED pattern control using 74HC595 shift register

**Features**:
- ✅ Sequential LED animation
- ✅ Bidirectional scanning pattern
- ✅ Efficient pin usage (3 pins control 8 LEDs)

</details>

<details>
<summary><b>🔵 8x8 LED Matrix</b></summary>

**Location**: `YT Lesson/8x8_Matrix/`

**Description**: Matrix display control for complex patterns and animations

</details>

<details>
<summary><b>🔵 Luminosity-Responsive LED Bar</b></summary>

**Location**: `YT Lesson/Luminosity_Sensor/`

**Description**: Light-sensitive LED bar graph using photoresistor

**Features**:
- ✅ Analog light sensing
- ✅ Real-time LED response
- ✅ Adjustable sensitivity threshold
- ✅ 8-LED visual feedback system

</details>

---

### 🌡️ Sensors & Monitoring

<details>
<summary><b>🟢 LM35 Temperature Sensor</b></summary>

**Location**: `Other/LM35_Temp_Sensor(x)/`

**Description**: Precision temperature measurement system

**Features**:
- ✅ Differential analog reading (A0 - A1)
- ✅ 10-sample averaging for accuracy
- ✅ Voltage-to-temperature conversion
- ✅ Serial data logging
- ✅ LED status indicator

</details>

<details>
<summary><b>🔥 Flame Detection System</b></summary>

**Location**: `Other/Flame_Sensor/`

**Description**: Fire detection using infrared flame sensor

**Features**:
- ✅ Analog flame intensity measurement
- ✅ Real-time monitoring via Serial
- ✅ Safety applications ready

</details>

---

### 🎵 Audio & Sound

<details>
<summary><b>🎶 Passive Buzzer Music Player</b></summary>

**Location**: `YT Lesson/PassiveBuzzer_TakeOnMe/`

**Description**: Plays "Take On Me" by A-ha using passive buzzer

**Features**:
- ✅ Note frequency library integration
- ✅ Melody and duration arrays
- ✅ Precise timing control
- ✅ Musical note generation

</details>

<details>
<summary><b>📡 Morse Code Translator</b></summary>

**Location**: `YT Lesson/Morse_Translator/`

**Description**: Text-to-Morse code converter with audio/visual output

**Features**:
- ✅ Complete alphabet and number support
- ✅ Audio beeping (dit/dah patterns)
- ✅ LED visual indication
- ✅ Serial input interface
- ✅ Configurable timing parameters
- ✅ Professional signal support

</details>

---

### ⌨️ User Input & Control

<details>
<summary><b>🔘 Debounced Button Interface</b></summary>

**Location**: `YT Lesson/Debounce_Button/`

**Description**: Professional button handling with software debouncing

**Features**:
- ✅ 5ms debounce timing
- ✅ State change detection
- ✅ Serial diagnostic output
- ✅ LED feedback system

</details>

<details>
<summary><b>💤 Deep Sleep Button Controller</b></summary>

**Location**: `YT Lesson/Button_DeepSleep/`

**Description**: Ultra-low power button system with interrupt handling

**Features**:
- ✅ External interrupt on button press
- ✅ Deep sleep mode implementation
- ✅ Watchdog timer integration
- ✅ Power optimization techniques
- ✅ Brownout detection disable

</details>

---

### 📺 Display Technologies

<details>
<summary><b>📟 LCD Hello World</b></summary>

**Location**: `Other/LCD_hello/`

**Description**: Basic LCD interface demonstration

**Features**:
- ✅ 16x2 character display
- ✅ Real-time counter display
- ✅ LiquidCrystal library usage
- ✅ Multi-line text support

</details>

<details>
<summary><b>🎱 Magic 8-Ball</b></summary>

**Location**: `YT Lesson/Magic_8ball/`

**Description**: Interactive fortune-telling device using tilt sensor and LCD

**Features**:
- ✅ Tilt ball switch detection
- ✅ Random response generation
- ✅ LCD message display
- ✅ Debounced input handling
- ✅ Classic Magic 8-Ball responses

</details>

---

### 📡 Communication & Protocols

<details>
<summary><b>📺 IR Remote Receiver</b></summary>

**Location**: `YT Lesson/IR_Receiver(x)/`

**Description**: Infrared remote control signal decoder

**Features**:
- ✅ IR signal protocol decoding
- ✅ Remote control integration
- ✅ Wireless command processing

</details>

---

## 🎓 Educational Projects

<div align="center">

<table>
<tr>
<td align="center">

**🔌 Digital I/O**
<br>
Button reading, LED control

</td>
<td align="center">

**📊 Analog Processing**
<br>
Sensor reading, ADC conversion

</td>
<td align="center">

**⏰ Timing Control**
<br>
Delays, interrupts, state machines

</td>
</tr>
<tr>
<td align="center">

**📡 Communication**
<br>
Serial protocols, IR transmission

</td>
<td align="center">

**🔋 Power Management**
<br>
Sleep modes, interrupt handling

</td>
<td align="center">

**🔧 Hardware Interfacing**
<br>
Shift registers, displays, sensors

</td>
</tr>
</table>

</div>

---

## ⚡ Advanced Projects

<div align="center">

### **🏆 Professional Timer (ProTimer)**

<img src="https://img.shields.io/badge/Complexity-Advanced-red?style=for-the-badge">
<img src="https://img.shields.io/badge/Pattern-State_Machine-purple?style=for-the-badge">

</div>

**Location**: `UML Course/003 ProTimer(x)/`

**Description**: Advanced state machine-based productivity timer

<div align="center">

**🎯 Key Features**

| Feature | Description |
|---------|-------------|
| 🏗️ **UML State Machine** | Professional design pattern implementation |
| 🎮 **Multi-button Interface** | Increment, decrement, start/pause, abort |
| 📱 **LCD Status Display** | Real-time visual feedback |
| ⚡ **Event-driven Architecture** | Responsive and efficient |
| 🧩 **Modular Design** | Separate LCD and state machine modules |

</div>

<details>
<summary><b>🔍 State Machine Design</b></summary>

```
┌─────────┐    INC_TIME     ┌──────────┐
│  IDLE   ├─────────────────►TIME_SET  │
└─────────┘                 └─────┬────┘
     ▲                            │ START_PAUSE
     │ ABRT                       ▼
     │                      ┌──────────┐
     │                      │COUNTDOWN │◄─┐
     │                      └─────┬────┘  │
     │                            │ START_PAUSE
     │                            ▼       │
     │                      ┌──────────┐  │
     └──────────────────────┤  PAUSE   ├──┘
                            └─────┬────┘
                                  │ TIME_TICK
                                  ▼
                            ┌──────────┐
                            │   STAT   │
                            └──────────┘
```

- **`IDLE`** - Initial state
- **`TIME_SET`** - Configuration mode  
- **`COUNTDOWN`** - Active timing
- **`PAUSE`** - Temporary halt
- **`STAT`** - Statistics display

</details>

---

## 🚀 Getting Started

<div align="center">

### Prerequisites

<table>
<tr>
<td align="center">
<img src="https://img.shields.io/badge/PlatformIO-Required-orange?style=flat-square">
<br><strong>PlatformIO IDE</strong>
</td>
<td align="center">
<img src="https://img.shields.io/badge/VS_Code-Recommended-blue?style=flat-square">
<br><strong>VS Code + PlatformIO</strong>
</td>
<td align="center">
<img src="https://img.shields.io/badge/Arduino-UNO_R3-green?style=flat-square">
<br><strong>Target Hardware</strong>
</td>
</tr>
</table>

</div>

### Building and Uploading

```bash
# 1. Navigate to desired project folder
cd "YT Lesson/7segment"

# 2. Build the project
pio run

# 3. Upload to Arduino
pio run --target upload

# 4. Monitor serial output
pio device monitor
```

---

## 📋 Requirements

<div align="center">

### 📚 Common Libraries Used

<table>
<tr>
<td align="center">

**Core Libraries**
- `Arduino.h`
- `LiquidCrystal.h`

</td>
<td align="center">

**Communication**
- `IRremote.h`
- Custom pitch libraries

</td>
</tr>
</table>

### 🔧 Hardware Components

<table>
<tr>
<td>

**Controllers**
- Arduino UNO R3
- 74HC595 Shift Registers

</td>
<td>

**Displays**
- 7-Segment Displays
- 16x2 LCD Display
- 8x8 LED Matrix

</td>
<td>

**Sensors**
- LM35 Temperature Sensor
- Flame/IR Sensor
- Photoresistor (LDR)

</td>
<td>

**I/O Components**
- Passive Buzzer
- Push Buttons
- Tilt Ball Switch
- LEDs & Resistors

</td>
</tr>
</table>

</div>

---

## 🤝 Contributing

<div align="center">

These projects serve as educational resources for embedded systems development.

**Feel free to:**

<table>
<tr>
<td align="center">
🔧<br><strong>Modify</strong><br>Experiment with code
</td>
<td align="center">
📚<br><strong>Learn</strong><br>Use as references
</td>
<td align="center">
🚀<br><strong>Build</strong><br>Extend existing projects
</td>
<td align="center">
💡<br><strong>Improve</strong><br>Suggest optimizations
</td>
</tr>
</table>

---

<h3>*Developed with ❤️ for learning embedded systems and Arduino programming*</h3>

<img src="https://img.shields.io/badge/Projects-15+-brightgreen?style=for-the-badge">
<img src="https://img.shields.io/badge/Categories-3-blue?style=for-the-badge">
<img src="https://img.shields.io/badge/Hardware-Multiple_Interfaces-orange?style=for-the-badge">
<img src="https://img.shields.io/badge/Advanced-State_Machine-purple?style=for-the-badge">

</div>