#include <QtCore/QUrl>
#include <QGuiApplication>
#include <QtQml/QQmlApplicationEngine>
#include <QtQml/QQmlContext>
#include <QtWebView/QtWebView>

int main(int argc, char ** argv)
{
    QtWebView::initialize();
    QGuiApplication app(argc, argv);
    QGuiApplication::setApplicationDisplayName(QCoreApplication::translate("main", "SynqThing"));
    QCoreApplication::setApplicationVersion(QStringLiteral("0.5.0"));

    QQmlApplicationEngine engine;
    QQmlContext * context = engine.rootContext();

    // TODO get all this from settings
    context->setContextProperty(QStringLiteral("initialX"), 200);
    context->setContextProperty(QStringLiteral("initialY"), 200);
    context->setContextProperty(QStringLiteral("initialWidth"), 1280);
    context->setContextProperty(QStringLiteral("initialHeight"), 900);
    context->setContextProperty(QStringLiteral("syncThingUrl"), QStringLiteral("http://localhost:8384/"));

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    if (engine.rootObjects().isEmpty()) {
        return -1;
    }

    return QGuiApplication::exec();
}
