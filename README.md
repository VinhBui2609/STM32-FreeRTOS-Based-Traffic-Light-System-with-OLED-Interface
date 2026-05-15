# STM32 FreeRTOS Traffic Light Controller

This project implements a traffic light controller using FreeRTOS on STM32.
The system uses multiple RTOS tasks to manage LEDs, button input, and OLED display updates.

Features:
- Traffic light state machine
- Pedestrian button handling
- SSD1306 OLED status display
- FreeRTOS task scheduling
- Inter-task communication


## Hardware
- STM32F411RE
- SSD1306 OLED Display (I2C)
- LEDs
- Push Button
- Breadboard + Jumper Wires


## Software & Tools
- STM32CubeIDE
- FreeRTOS
- STM32 HAL Driver
- CMSIS-RTOS v2


## FreeRTOS Features
- Tasks
- Queues
- Mutexes
- Binary Semaphores
- Software Timers
- Task Priorities
- Delay Functions


## Tasks

### TrafficLightTask
Controls LED state transitions.
- RED
- RED_YELLOW
- GREEN
- YELLOW

### ButtonTask
Reads pedestrian button input.

### DisplayTask
Updates OLED display with current traffic state.

### TimerTask
Handles periodic timing events.


## Build & Flash
1. Open project in STM32CubeIDE
2. Build the project
3. Flash to STM32 board
4. Open serial monitor if UART is enabled
