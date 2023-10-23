﻿#include <stdio.h>
#include <random>
#include <chrono>
#include <thread>
#include <iostream>

std::random_device seed_Gen;//非決定的な乱数生成器
std::mt19937 mtrand(seed_Gen());//メルセンヌ・ツイスタの32bit版　引数は初期シード

typedef int (*Pfunc)(int);//関数ポインタ

int DiceRoll(int Answer){
	int RollResult = std::uniform_int_distribution<int>(1, 6)(seed_Gen);//1~6の間の値を生成できる
	printf("Answer : %d\n", RollResult);
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

void DiceResult(int diceNumber) {
	//偶数のとき
	if (diceNumber % 2 == 0) {
		printf("出たのは丁でした！\n");
	}
	if (diceNumber % 2 == 1) {
		printf("出たのは半でした！\n");
	}
}

int SetTimeOut(Pfunc collback,int second) {
	std::this_thread::sleep_for(std::chrono::seconds(second));
	collback();
	return collback();

}

int main() {

	Pfunc p;
	
	int RollResult;
	int Answer;

	while (true) {
		
		printf("1:半(奇数)　2:丁(偶数)　0:終了\n");
		std::cin >> Answer;
		p = DiceRoll(Answer);
		if (Answer == 0) {
			break;
		}
		RollResult = SetTimeOut(p, 3);
		

	}

	return 0;
}