#pragma once
#include "Animals.h"

#include <stdio.h>

class Turtle : public Animals
{
public:
	Turtle();
	~Turtle();

	void Run()override;

private:

};

