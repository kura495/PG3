#pragma once
#include "IShape.h"

class Rectangle : public IShape
{
public:
	Rectangle();
	~Rectangle();
	void Initalize(float height, float width);
	//�ʐς����߂�
	void size()override;
	//�l��\������
	void draw()override;

private:
	//�c
	float height_ = 1;
	//��
	float width_ = 1;
	//�ʐ�
	float area_;
};
