void Ball::update(float deltaTime) {
    Vector2 gravity = Vector2(0, -9.8); 
    Vector2 airResistance = -velocity * airResistanceCoefficient;
    Vector2 magnusForce = calculateMagnusForce(angularVelocity, velocity); 

    Vector2 totalForce = gravity + airResistance + magnusForce;

    velocity += totalForce * deltaTime;
    position += velocity * deltaTime;

    if (position.y <= groundLevel) {
        velocity.y *= -bounciness; 
        position.y = groundLevel;
    }
}
