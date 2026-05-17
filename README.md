# STM32 FreeRTOS Traffic Light Controller

This project implements a traffic light controller using FreeRTOS on STM32.
The system uses multiple RTOS tasks to manage LEDs, button input and many features

## I-Features:
- Traffic light state machine
- Pedestrian button handling
- FreeRTOS task scheduling
- Inter-task communication


## II-Hardware
- STM32F411RE
- LEDs
- Push Button
- Breadboard + Jumper Wires


## III-Software & Tools
- STM32CubeIDE
- FreeRTOS
- STM32 HAL Driver
- CMSIS-RTOS v2


## IV-FreeRTOS Features
- Tasks
- Queues
- Mutexes
- Binary Semaphores
- Task Priorities


## V-Tasks

  ### 1.TrafficLightTask
  Controls LED state transitions.
  - RED
  - GREEN
  - YELLOW

  ### 2.ButtonTask
  Reads pedestrian button input.

  ### 3.DisplayTask
  Updates OLED display with current traffic state.



## VI-Build & Flash
1. Open project in STM32CubeIDE
2. Build the project
3. Flash to STM32 board
4. Open serial monitor if UART is enabled
