#include "Circle.h"
#include "Rectangle.h"


int main() {
	//‰~
	Circle* circle = new Circle();
	circle->Initalize(2.0f);
	circle->size();
	circle->draw();
	//‹éŒ`
	Rectangle* rectangle = new Rectangle();
	rectangle->Initalize(2.0f,1.0f);
	rectangle->size();
	rectangle->draw();


	return 0;
}