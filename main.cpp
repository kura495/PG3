#include <stdio.h>
#include <random>
#include <chrono>
#include <thread>
#include <iostream>
#include <functional>

std::random_device seed_Gen;//�񌈒�I�ȗ���������
std::mt19937 mtrand(seed_Gen());//�����Z���k�E�c�C�X�^��32bit�Ł@�����͏����V�[�h

//int DiceRoll(){
//	return std::uniform_int_distribution<int>(1, 6)(seed_Gen);//1~6�̊Ԃ̒l�𐶐��ł���
//}

void DiceResult(int diceNumber) {
	//�����̂Ƃ�
	if (diceNumber % 2 == 0) {
		printf("�o���̂͒��ł����I\n");
	}
	if (diceNumber % 2 == 1) {
		printf("�o���͔̂��ł����I\n");
	}
}

int SetTimeOut(std::function<int()> collback,int second) {
	std::this_thread::sleep_for(std::chrono::seconds(second));
	return collback();
}

int main() {
	std::function<int()> fx = [](){return std::uniform_int_distribution<int>(1, 6)(seed_Gen); };//1~6�̊Ԃ̒l�𐶐��ł���};
	int RollResult;
	int Answer;

	while (true) {
		
		printf("1:��(�)�@2:��(����)�@0:�I��\n");
		std::cin >> Answer;
		if (Answer == 0) {
			break;
		}
		RollResult = SetTimeOut(fx, 3);
		printf("Answer : %d\n",RollResult);
		DiceResult(RollResult);
		if (RollResult % 2 == 0 && Answer == 2) {
			printf("���Ȃ��̏���\n");
		}
		else if (RollResult % 2 == 1 && Answer == 1) {
			printf("���Ȃ��̏���\n");
		}
		else {
			printf("���Ȃ��̕���\n");
		}

	}

	return 0;
}