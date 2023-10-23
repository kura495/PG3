#include "Cheetah.h"
#include "Turtle.h"
#include "Base.h"

int main() {
	Base* Animals[2];
	Animals[0] = new Cheetah();
	Animals[1] = new Turtle();

	Animals[0]->Run();
	Animals[1]->Run();

	return 0;
}