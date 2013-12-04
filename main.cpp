#include <QGuiApplication>
#include <QQuickView>
#include <QQmlContext>
#include <QQmlEngine>
#include <QDir>
#include <QFileInfo>
#include <QDebug>

int main(int argc, char* argv[])
{
	QGuiApplication app(argc, argv);
	QQuickView view;

	view.connect(view.engine(), SIGNAL(quit()), &app, SLOT(quit()));
	//view.setSource(QUrl::fromLocalFile("./main.qml"));
	view.setSource(QUrl("qrc:////qml/main.qml"));
	view.setResizeMode(QQuickView::SizeRootObjectToView);
	view.show();

	return app.exec();
}
