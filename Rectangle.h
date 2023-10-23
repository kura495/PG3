#pragma once
#include "IShape.h"

class Rectangle : public IShape
{
public:
	Rectangle();
	~Rectangle();

	//–ÊÏ‚ğ‹‚ß‚é
	void size()override;
	//’l‚ğ•\¦‚·‚é
	void draw()override;

private:

};
