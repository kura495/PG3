#pragma once
#include "IShape.h"

class Rectangle : public IShape
{
public:
	Rectangle();
	~Rectangle();

	//�ʐς����߂�
	void size()override;
	//�l��\������
	void draw()override;

private:

};
