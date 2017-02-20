#include <QtCore/QCoreApplication>
#include <Ray.h>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	Ray ray{};
	return a.exec();
}
