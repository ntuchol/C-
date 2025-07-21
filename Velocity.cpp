struct Vector2D {
        float x;
        float y;
    };

    struct Vector3D {
        float x;
        float y;
        float z;
    };

// In a game loop or update function
    void updatePosition(Vector3D& position, const Vector3D& velocity, float deltaTime) {
        position.x += velocity.x * deltaTime;
        position.y += velocity.y * deltaTime;
        position.z += velocity.z * deltaTime;
    }
     // Example of applying acceleration to velocity
    void applyAcceleration(Vector3D& velocity, const Vector3D& acceleration, float deltaTime) {
        velocity.x += acceleration.x * deltaTime;
        velocity.y += acceleration.y * deltaTime;
        velocity.z += acceleration.z * deltaTime;
    }