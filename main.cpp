#include <stdio.h>


template <typename Type>
//TODO:printfを関数内に入れる
Type Min(Type a, Type b) {
	return a < b ? a : b;
}

//テンプレートの解除
template <>

char Min<char>(char a, char b) {
	printf("数字以外は代入できません\n");
	return '\0';
}

int main() {
	//int
	printf("%d\n", Min<int>(1, 4));
	
	//float
	printf("%f\n", Min<float>(3.21f, 3.1f));
	//double
	printf("%lf\n", Min<double>(5.4, 5.7));
	//char
	Min<char>('a', 'b');

	return 0;
}