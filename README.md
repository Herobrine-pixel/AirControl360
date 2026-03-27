# ⚡ AirControl360

🚀 AirControl360 is a gesture and motion-based control library for Arduino/ESP32 using the MPU6050 sensor.
It enables touchless control using hand movements like swipe, push, and pull.

---

## 👨‍💻 Developer
Herobrine Pixel
2026

---

## 🌟 Features
- Swipe Left / Right Detection
- Push & Pull Gestures
- Real-time motion tracking
- Easy API
- WebApp support
- Clean modular structure

---

## 📦 Installation

### Arduino IDE
Sketch → Include Library → Add .ZIP Library

### PlatformIO
Add to lib folder or lib_deps

---

## 🔌 Wiring (MPU6050 with ESP32)

| MPU6050 | ESP32 |
|--------|------|
| VCC    | 3.3V |
| GND    | GND  |
| SDA    | GPIO21 |
| SCL    | GPIO22 |

---

## 🚀 Example

```cpp
#include <AirControl360.h>

AirControl360 air;

void setup() {
  Serial.begin(115200);
  air.begin();
}

void loop() {
  air.update();

  if (air.swipeLeft()) Serial.println("LEFT");
  if (air.swipeRight()) Serial.println("RIGHT");
  if (air.push()) Serial.println("PUSH");
  if (air.pull()) Serial.println("PULL");

  delay(100);
}
```

---

## 🧠 How It Works
- Reads MPU6050 acceleration
- Compares previous and current values
- Detects directional motion spikes

---

## 📁 Project Structure
- src/ → core library
- examples/ → demo code
- WebApp/ → visualization
- config files → Arduino + PlatformIO support

---

## 📜 License
MIT License

Copyright (c) 2025 Herobrine Pixel

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the “Software”), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

## Dont forget to give a STAR ......
