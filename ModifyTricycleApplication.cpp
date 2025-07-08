// Original code
// double currentSpeed = 10.0;

// Modified code to increase speed with acceleration
void accelerate(double accelerationValue) {
    currentSpeed += accelerationValue;
    if (currentSpeed > maxSpeed) {
        currentSpeed = maxSpeed;
    }
}