#pragma once
#include "IShape.h"

class Circle : public IShape
{
public:
	Circle();
	~Circle();

	//面積を求める
	void size()override;
	//値を表示する
	void draw()override;

private:

};

