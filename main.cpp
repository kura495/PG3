#include <stdio.h>
#include <random>

std::random_device seed_Gen;//�񌈒�I�ȗ���������
std::mt19937 mtrand(seed_Gen());//�����Z���k�E�c�C�X�^��32bit�Ł@�����͏����V�[�h

typedef void (*Pfunc)();//�֐��|�C���^

int DiceRoll(){
	return std::uniform_int_distribution<int>(1, 6)(seed_Gen);//1~6�̊Ԃ̒l�𐶐��ł���
}

void DiceResult(int diceNumber) {
	//�����̂Ƃ�
	if (diceNumber % 2 == 0) {
		printf("�o���̂͒��ł����I");
	}
	if (diceNumber % 2 == 1) {
		printf("�o���͔̂��ł����I");
	}
}

int main() {

	while (true) {



	}

	return 0;
}