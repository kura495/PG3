#include <stdio.h>
#include <random>

std::random_device seed_Gen;//非決定的な乱数生成器
std::mt19937 mtrand(seed_Gen());//メルセンヌ・ツイスタの32bit版　引数は初期シード

typedef void (*Pfunc)();//関数ポインタ

int DiceRoll(){
	return std::uniform_int_distribution<int>(1, 6)(seed_Gen);//1~6の間の値を生成できる
}

void DiceResult(int diceNumber) {
	//偶数のとき
	if (diceNumber % 2 == 0) {
		printf("出たのは丁でした！");
	}
	if (diceNumber % 2 == 1) {
		printf("出たのは半でした！");
	}
}

int main() {

	while (true) {



	}

	return 0;
}