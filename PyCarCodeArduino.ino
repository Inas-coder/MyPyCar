    // Define motor control pins
const int motorPin1 = 9;   // Motor 1 (Left motor forward)
const int motorPin2 = 10;  // Motor 1 (Left motor backward)
const int motorPin3 = 11;  // Motor 2 (Right motor forward)
const int motorPin4 = 12;  // Motor 2 (Right motor backward)

void setup() {
  // Set motor pins as output
  pinMode(motorPin1, OUTPUT);  // Left motor forward
  pinMode(motorPin2, OUTPUT);  // Left motor backward
  pinMode(motorPin3, OUTPUT);  // Right motor forward
  pinMode(motorPin4, OUTPUT);  // Right motor backward

  // Initialize Serial Monitor for debugging
  Serial.begin(9600);
}

void loop() {
  // Command to move forward
  moveForward();
  delay(2000);  // Move forward for 2 seconds
 
  // Command to move backward
  moveBackward();
  delay(2000);  // Move backward for 2 seconds
}

// Function to move both motors forward
void moveForward() {
  // Both motors move forward
  digitalWrite(motorPin1, HIGH);   // Left motor forward
  digitalWrite(motorPin2, LOW);    // Left motor backward
  digitalWrite(motorPin3, HIGH);   // Right motor forward
  digitalWrite(motorPin4, LOW);    // Right motor backward
  Serial.println("Both motors are moving forward!");
}

// Function to move both motors backward
void moveBackward() {
  // Both motors move backward
  digitalWrite(motorPin1, LOW);    // Left motor forward
  digitalWrite(motorPin2, HIGH);   // Left motor backward
  digitalWrite(motorPin3, LOW);    // Right motor forward
  digitalWrite(motorPin4, HIGH);   // Right motor backward
  Serial.println("Both motors are moving backward!");
}                                                         