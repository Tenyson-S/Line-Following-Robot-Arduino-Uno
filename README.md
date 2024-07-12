Components Required:

  Arduino Uno
  L298N Motor Driver
  Two IR Sensors
  DC Motors
  Power Supply (Battery)
  Connecting Wires
  Connections:
  L298N Motor Driver to Arduino:

IN1 -> D2
IN2 -> D3
IN3 -> D4
IN4 -> D5
ENA -> 5V (you can use a PWM pin for speed control)
ENB -> 5V (you can use a PWM pin for speed control)
IR Sensors to Arduino:

  Left IR Sensor:
    VCC -> 5V
    GND -> GND
    OUT -> D6
  Right IR Sensor:
    VCC -> 5V
    GND -> GND
    OUT -> D7
    DC Motors:

Connect the motors to the outputs of the L298N Motor Driver.
