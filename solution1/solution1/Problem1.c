#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	//���������
	setlocale(LC_ALL, "rus");
	//���������� ����������
	int AB, BC, AC;
	float S, p;
	printf("������� ��� ������� ������������");
	scanf_s("%d %d %d", &AB, &BC, &AC);
	//���������� ������
	p = (AB + BC + AC) * 0.5;
	if (AB > 0 && BC > 0 && AC > 0) {
	if (AB + BC >= AC && AB + AC >= BC && AC + BC >= AB) {
		S = sqrt(p * (p - AB) * (p - BC) * (p - AC));
		printf("���������: S=%.2f\n", S);
	}else{
		printf("������ ������������ �� ����������!\n");
	}
}else{
	printf("������� ������ �������!\n");
}	


system("pause");
	return 0;
}