// Motor Driver Pins
const int IN1 = 2;
const int IN2 = 3;
const int IN3 = 4;
const int IN4 = 5;

// IR Sensor Pins
const int LEFT_IR_SENSOR = 6;
const int RIGHT_IR_SENSOR = 7;

void setup() {
  // Motor Pins
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // IR Sensor Pins
  pinMode(LEFT_IR_SENSOR, INPUT);
  pinMode(RIGHT_IR_SENSOR, INPUT);
}

void loop() {
  // Read IR Sensors
  int leftSensor = digitalRead(LEFT_IR_SENSOR);
  int rightSensor = digitalRead(RIGHT_IR_SENSOR);
  
  // Line Following Logic
  if (leftSensor == LOW && rightSensor == LOW) {
    // Move forward
    forward();
  } else if (leftSensor == LOW && rightSensor == HIGH) {
    // Turn left
    left();
  } else if (leftSensor == HIGH && rightSensor == LOW) {
    // Turn right
    right();
  } else {
    // Stop if both sensors are HIGH
    stop();
  }
}

void forward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void left() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void right() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void stop() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
