#include "Circle.h"

Circle::Circle(){}
Circle::~Circle(){}

void Circle::Initalize(float radius)
{
	radius_ = radius;
}

void Circle::size()
{
	area_ = radius_ * radius_ * (float)std::numbers::pi;
}

void Circle::draw()
{
	printf("ñ êœÇÕ%fÇ≈Ç∑\n",area_);
}
