#include <stdio.h>
#include <random>
#include <chrono>
#include <thread>
#include <iostream>
#include <functional>

std::random_device seed_Gen;//非決定的な乱数生成器
std::mt19937 mtrand(seed_Gen());//メルセンヌ・ツイスタの32bit版　引数は初期シード

//int DiceRoll(){
//	return std::uniform_int_distribution<int>(1, 6)(seed_Gen);//1~6の間の値を生成できる
//}

void DiceResult(int diceNumber) {
	//偶数のとき
	if (diceNumber % 2 == 0) {
		printf("出たのは丁でした！\n");
	}
	if (diceNumber % 2 == 1) {
		printf("出たのは半でした！\n");
	}
}

int SetTimeOut(std::function<int()> collback,int second) {
	std::this_thread::sleep_for(std::chrono::seconds(second));
	return collback();
}

int main() {
	std::function<int()> fx = [](){return std::uniform_int_distribution<int>(1, 6)(seed_Gen); };//1~6の間の値を生成できる};
	int RollResult;
	int Answer;

	while (true) {
		
		printf("1:半(奇数)　2:丁(偶数)　0:終了\n");
		std::cin >> Answer;
		if (Answer == 0) {
			break;
		}
		RollResult = SetTimeOut(fx, 3);
		printf("Answer : %d\n",RollResult);
		DiceResult(RollResult);
		if (RollResult % 2 == 0 && Answer == 2) {
			printf("あなたの勝ち\n");
		}
		else if (RollResult % 2 == 1 && Answer == 1) {
			printf("あなたの勝ち\n");
		}
		else {
			printf("あなたの負け\n");
		}

	}

	return 0;
}