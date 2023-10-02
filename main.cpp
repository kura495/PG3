

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
	printf("一般的な賃金 : %d\n", Wage);
	printf("再帰的な賃金 : %d\n", RecursiveWage);
	if (Wage > RecursiveWage) {
		printf("一般的な賃金体系の方が稼げます");
	}
	else if (Wage < RecursiveWage) {
		printf("再帰的な賃金体系の方が稼げます");
	}
	else if (Wage == RecursiveWage) {
		printf("同じです");
	}
}

int main() {
	ComparisonWage(9);

	return 0;
}