#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
int main() {
	//���������
	setlocale(LC_ALL, "rus");
	strand(time(0));
	//���������� ����������
	int left_board, right_board;
	int A, B;
	int AB;
	left_board = -100 + rand() % (100 + 100 + 1);
	right_board = left_board + rand() % (100 - left_board + 1);
	if (A >= -10 && A <= 10 && B >= -10 && B <= 10) {
		printf("������� ��� ����� �� [%d, %d]", left_board, right_board);
		scanf_s("%d %d", & A, &B);
		AB = -A + B;
		printf("���������:AB=%d\n", AB);




	system("pause");
	return 0;
}