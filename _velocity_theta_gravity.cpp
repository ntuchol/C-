#include <cmath> 
struct ProjectileState {
    double x;
    double y;
    double vx;
    double vy;
    double angle;
};

ProjectileState calculateProjectileMotion(double throwAngle, double throwSpeed, double time, double gravity = 9.81) {
    ProjectileState state;

    double ux = throwSpeed * std::cos(throwAngle);
    double uy = throwSpeed * std::sin(throwAngle);

    state.x = ux * time;
    state.y = uy * time - 0.5 * gravity * time * time;
    state.vx = ux;
    state.vy = uy - gravity * time;
    state.angle = std::atan2(state.vy, state.vx);

    return state;
}
