#include <QCoreApplication>
#include <QImage>
#include <QDebug>
#include <glm/glm.hpp>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	
	QSize image_size{ 512,512 };
	QImage image{image_size, QImage::Format::Format_ARGB32_Premultiplied};
	image.fill(QColor( 255,255,0 ));

	//for (int x = 0; x < 512; x++)
	//{
	//	for (int y = 0; y < 512; y++)
	//	{
	//		image.setPixelColor(x, y, QColor{ x / 2 , y / 2, y / 2 });
	//	}
	//}

	qDebug() << image.save("C:/Users/the_u/Desktop/1.png");

	return a.exec();
}
