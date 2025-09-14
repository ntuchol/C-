double currentSpeed = 10.0;

void accelerate(double accelerationValue) {
    currentSpeed += accelerationValue;
    if (currentSpeed > maxSpeed) {
        currentSpeed = maxSpeed;
    }
}
