#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "snake.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    snake *model = new snake();
    engine.rootContext()->setContextProperty("snake", model);
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));

    return app.exec();
}
