 #include <QtWidgets/QApplication>
 #include <QtWidgets/QPushButton>
 #include <QtWidgets/QMainWindow>

    int main(int argc, char *argv[]) {
        QApplication a(argc, argv);
        QMainWindow window;
        QPushButton *button = new QPushButton("Click Me", &window);
        button->setGeometry(50, 50, 100, 30); 
        QObject::connect(button, &QPushButton::clicked, [&]() {
            qDebug() << "Button clicked!";
        });
        window.show();
        return a.exec();
    }
