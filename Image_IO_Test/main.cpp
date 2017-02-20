#include <boost/gil/gil_all.hpp>
#include <boost/gil/extension/io/png_io.hpp>
#include <string>

using namespace boost::gil;

int main(int argc, char* argv[])
{
	std::string path1 = "C:/Users/the_u/Desktop/Photo.jpg";
	std::string path2 = "C:/Users/the_u/Desktop/Photo1.jpg";

	rgb8_image_t img;
	png_read_image(path1, img);

	gray8s_view_t view(img.dimensions());
	color_converted_view<gray8_pixel_t>(const_view(img), view);

	png_write_view(path2, view);
}
