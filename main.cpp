

#include <stdio.h>

int WageCalc(int time) {
	return 1072 * time;
}

int RecursiveWageCalc(int time,int HourlyWage = 100) {
	if (time == 1) {
		return HourlyWage;
	}
	return (RecursiveWageCalc(time - 1,HourlyWage*2 - 50));
}

void ComparisonWage(int time) {
	int Wage = WageCalc(time);
	int RecursiveWage = RecursiveWageCalc(time);
	printf("��ʓI�Ȓ��� : %d\n", Wage);
	printf("�ċA�I�Ȓ��� : %d\n", RecursiveWage);
	if (Wage > RecursiveWage) {
		printf("��ʓI�Ȓ����̌n�̕����҂��܂�");
	}
	else if (Wage < RecursiveWage) {
		printf("�ċA�I�Ȓ����̌n�̕����҂��܂�");
	}
	else if (Wage == RecursiveWage) {
		printf("�����ł�");
	}
}

int main() {
	ComparisonWage(9);

	return 0;
}