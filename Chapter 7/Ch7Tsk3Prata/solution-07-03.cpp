#include <iostream>

struct box
{
	char maker[40];
	float height;
	float width;
	float lenght;
	float volume;
};

void calculation(box *); // void calculation(box &);
void display(box);

int main()
{
	box cube =
	{
		"CUBE", 10, 10, 10, 0
	};
	calculation(&cube); // calculation(cube);
	display(cube);
	return 0;
}

void calculation(box * a) // void calculation(box&)
{
	a->volume = a->height * a->width * a->lenght; // a.volume = a.height * a.width * a.lenght;
}


void display(box a)
{
	std::cout << "Structure:" << std::endl;
	std::cout << "Maker # " << a.maker << std::endl;
	std::cout << "Height # " << a.height << std::endl;
	std::cout << "Width # " << a.width << std::endl;
	std::cout << "Lenght # " << a.lenght << std::endl;
	std::cout << "Volume # " << a.volume << std::endl;
}