#include<iostream>
#include "Rectangle.h"

int Rectangle:: getArea()
{
	return width*height;
}
Rectangle::Rectangle(int w, int h)
{
	width = w;
	height = h;
}