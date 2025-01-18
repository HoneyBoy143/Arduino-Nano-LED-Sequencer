# Arduino Nano LED Sequencer

This project demonstrates how to control three LEDs connected to an Arduino Nano. Each LED lights up sequentially for 500 milliseconds, creating a simple light sequence.

## Short Description

This is a beginner-friendly project using an Arduino Nano to sequentially light up three LEDs. It's a great way to learn microcontroller programming, basic electronics, and sequential task execution.

## Table of Contents

- [Overview](#overview)
- [Components Required](#components-required)
- [Circuit Diagram](#circuit-diagram)
- [Code Explanation](#code-explanation)
- [How to Run](#how-to-run)
- [Future Improvements](#future-improvements)
- [License](#license)

## Overview

The **Arduino Nano LED Sequencer** is a beginner-friendly project to understand the basics of microcontroller programming, pin configuration, and LED control using Arduino.

## Components Required

1. Arduino Nano
2. 3 LEDs (any color)
3. 3 Resistors (220 Ω recommended)
4. Breadboard
5. Jumper wires
6. USB cable for uploading code

## Circuit Diagram

Connect the LEDs to the Arduino Nano as follows:

- LED1: Connect to pin **2** with a 220 Ω resistor.
- LED2: Connect to pin **6** with a 220 Ω resistor.
- LED3: Connect to pin **4** with a 220 Ω resistor.
- Connect the negative leg of each LED to the ground (GND).

![Circuit Diagram Placeholder](https://via.placeholder.com/800x400.png?text=Add+Circuit+Diagram)

## Code Explanation

The Arduino sketch is written in C++ and consists of two main functions:

1. **`setup()`**:
   - Configures pins 2, 6, and 4 as output pins to control the LEDs.

2. **`loop()`**:
   - Sequentially turns each LED on for 500 milliseconds, then turns it off.


## How to Run

1. Clone this repository or download the ZIP file.
2. Open the code file in the Arduino IDE.
3. Connect your Arduino Nano to your computer using a USB cable.
4. Select the correct board (**Arduino Nano**) and port in the Arduino IDE.
5. Upload the code to the Arduino Nano.
6. Observe the LEDs lighting up in sequence.

## Future Improvements

- Add more LEDs to create a longer sequence.
- Implement fading effects using PWM.
- Control the sequence using a button or potentiometer.
- Use a 7-segment display for advanced patterns.

## License

This project is licensed under the MIT License. You are free to use, modify, and distribute the code and design as per the license terms.

---

Feel free to explore, modify, and enhance this project! If you encounter any issues, open an issue in this repository or reach out for support.

