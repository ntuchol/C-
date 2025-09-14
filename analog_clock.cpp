#include <iostream>
#include <ctime>
#include <cmath> 
class AnalogClock {
public:
    AnalogClock(int x, int y, int radius) : centerX(x), centerY(y), radius(radius) {}

    void draw() {
        drawCircle(centerX, centerY, radius);

        time_t rawtime;
        time(&rawtime);
        struct tm *timeinfo = localtime(&rawtime);

        double secondsAngle = (timeinfo->tm_sec * 6.0) - 90; 
        double minutesAngle = (timeinfo->tm_min * 6.0 + timeinfo->tm_sec * 0.1) - 90; 
        double hoursAngle = (timeinfo->tm_hour % 12 * 30.0 + timeinfo->tm_min * 0.5) - 90;

        int secHandX = centerX + (int)(radius * 0.8 * cos(secondsAngle * M_PI / 180.0));
        int secHandY = centerY + (int)(radius * 0.8 * sin(secondsAngle * M_PI / 180.0));
        drawLine(centerX, centerY, secHandX, secHandY);

        drawCircle(centerX, centerY, 5);
    }

private:
    int centerX, centerY, radius;
};

int main() {
     myClock(300, 200, 150);

    while (windowIsOpen) {
      myClock.draw();
    }

    return 0;
}
