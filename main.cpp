#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <thread>

void DrawNumber(int number) {
	std::string output = "thread ";
	std::cout << output << number << std::endl;
}

int main() {

	std::thread th1(DrawNumber,1);
	th1.join();
	std::thread th2(DrawNumber,2);
	th2.join();
	std::thread th3(DrawNumber,3);
	th3.join();

	return 0;
}