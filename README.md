# ZMPT101B AC Voltage Sensor Arduino Project

This Arduino project reads AC voltage using the **ZMPT101B** voltage sensor module. The project measures the RMS voltage and outputs it to the Serial Monitor.

## Components

- Arduino board (e.g., ESP32, Arduino Uno, etc.)
- ZMPT101B AC Voltage Sensor
- Connecting wires
- USB cable for programming the Arduino

## Circuit Diagram

- Connect **VCC** of ZMPT101B to **5V** (or 3.3V depending on your board)
- Connect **GND** of ZMPT101B to **GND** on Arduino
- Connect **Analog Output (VOUT)** of ZMPT101B to **A0 / GPIO34** (based on your Arduino model)

## Installation

1. Install the **ZMPT101B Arduino library**:
   - Go to Arduino IDE → **Sketch** → **Include Library** → **Manage Libraries**
   - Search for `ZMPT101B` and install it.

2. Clone this repository or download the code:
   ```bash
   https://github.com/CJdevX/ZMPT101B_Voltage_Sensor_Test.git
