#include <QApplication>
#include <QPushButton>
#include <QPropertyAnimation>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPushButton button("Animated Button");
    button.show();
    QPropertyAnimation animation(&button, "geometry");
    animation.setDuration(500);
    animation.setStartValue(QRect(0, 0, 100, 30));
    animation.setEndValue(QRect(250, 250, 100, 30));
    animation.start();

    return a.exec();
}
