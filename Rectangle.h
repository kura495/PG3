#pragma once
#include "IShape.h"

class Rectangle : public IShape
{
public:
	Rectangle();
	~Rectangle();

	//面積を求める
	void size()override;
	//値を表示する
	void draw()override;

private:

};
