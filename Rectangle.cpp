#include "Rectangle.h"

Rectangle::Rectangle(){}
Rectangle::~Rectangle(){}

void Rectangle::Initalize(float height, float width)
{
	height_ = height;
	width_ = width;
}

void Rectangle::size()
{
	area_ = height_ * width_;
}

void Rectangle::draw()
{
	printf("�ʐς�%f�ł�\n", area_);
}
