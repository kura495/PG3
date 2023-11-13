#include "Cheetah.h"
#include "Turtle.h"
#include "Animals.h"

int main() {
	Animals* animals[2];
	animals[0] = new Cheetah();
	animals[1] = new Turtle();

	animals[0]->Run();
	animals[1]->Run();

	return 0;
}