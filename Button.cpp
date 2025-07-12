 #include <QtWidgets/QApplication>
    #include <QtWidgets/QPushButton>
    #include <QtWidgets/QMainWindow>

    int main(int argc, char *argv[]) {
        QApplication a(argc, argv);
        QMainWindow window;
        QPushButton *button = new QPushButton("Click Me", &window);
        // Position and size the button as needed
        button->setGeometry(50, 50, 100, 30); 
        // Connect the button's clicked signal to a slot (function)
        QObject::connect(button, &QPushButton::clicked, [&]() {
            // Code to execute when the button is clicked
            qDebug() << "Button clicked!";
        });
        window.show();
        return a.exec();
    }