#include "Pair.h"
#include <iostream>

int main() {
	Pair<int,int> IntAndInt(10,11);
	std::cout << IntAndInt.Min() << std::endl;
	
	Pair<int,float> IntAndFloat(10,9.0f);
	std::cout << IntAndFloat.Min() << std::endl;
	
	Pair<int,double> IntAnddouble(9,11.0);
	std::cout << IntAnddouble.Min() << std::endl;
	
	Pair<float,float> FloatAndFloat(9.0f,10.0f);
	std::cout << FloatAndFloat.Min() << std::endl;

	Pair<float, double>FloatAndDouble(10.0,9.0); 
	std::cout << FloatAndDouble.Min() << std::endl;

	Pair<double, double> DoubleAndDouble(10,9.0);
	std::cout << DoubleAndDouble.Min() << std::endl;



	return 0;
}