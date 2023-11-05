#pragma once
#include "IShape.h"

#include <cmath>
#include <numbers>
class Circle : public IShape
{
public:
	Circle();
	~Circle();

	void Initalize(float radius);
	//�ʐς����߂�
	void size()override;
	//�l��\������
	void draw()override;

private:
	//���a
	float radius_;
	//�ʐ�
	float area_;
};

