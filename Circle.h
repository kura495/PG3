#pragma once
#include "IShape.h"

class Circle : public IShape
{
public:
	Circle();
	~Circle();

	//�ʐς����߂�
	void size()override;
	//�l��\������
	void draw()override;

private:

};

