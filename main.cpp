#include "Cheetah.h"
#include "Turtle.h"


int main() {
	Cheetah* cheetah = new Cheetah();
	Turtle* turtle = new Turtle();
	cheetah->Run();
	turtle->Run();
	return 0;
}