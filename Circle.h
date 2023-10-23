#pragma once
#include "IShape.h"

class Circle : public IShape
{
public:
	Circle();
	~Circle();

	//–ÊÏ‚ğ‹‚ß‚é
	void size()override;
	//’l‚ğ•\¦‚·‚é
	void draw()override;

private:
	//”¼Œa
	float radius_;
	//–ÊÏ
	float area_;
};

