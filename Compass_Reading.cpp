 #include <QMC5883LCompass.h>

        QMC5883LCompass compass;

        void setup() {
          Serial.begin(9600);
          compass.init();
          compass.setCalibrationOffsets(-100, 100, -100, 100, -100, 100); 
        }

        void loop() {
          int x, y, z;
          compass.read(&x, &y, &z);
          int azimuth = compass.getAzimuth();
          Serial.print("Azimuth: ");
          Serial.println(azimuth);
          delay(100);
        }

#include <QCompass>
#include <QCompassReading>
#include <QDebug>

        QCompass *compass = new QCompass(this);
        compass->start();

        connect(compass, &QCompass::readingChanged, this, [this]() {
            QCompassReading *reading = static_cast<QCompassReading*>(compass->reading());
            if (reading) {
                qDebug() << "Azimuth:" << reading->azimuth();
            }
        });
