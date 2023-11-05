#pragma once
#include "IShape.h"

class Rectangle : public IShape
{
public:
	Rectangle();
	~Rectangle();
	void Initalize(float height, float width);
	//–ÊÏ‚ğ‹‚ß‚é
	void size()override;
	//’l‚ğ•\¦‚·‚é
	void draw()override;

private:
	//c
	float height_ = 1;
	//‰¡
	float width_ = 1;
	//–ÊÏ
	float area_;
};
