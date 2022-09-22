#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	//настройки
	setlocale(LC_ALL, "rus");
	//объявление переменных
	int AB, BC, AC;
	float S, p;
	printf("Введите три стороны треугольника");
	scanf_s("%d %d %d", &AB, &BC, &AC);
	//ВЫПОЛНЕНИЕ ЗАДАЧИ
	p = (AB + BC + AC) * 0.5;
	if (AB > 0 && BC > 0 && AC > 0) {
	if (AB + BC >= AC && AB + AC >= BC && AC + BC >= AB) {
		S = sqrt(p * (p - AB) * (p - BC) * (p - AC));
		printf("Результат: S=%.2f\n", S);
	}else{
		printf("Такого треугольника не существует!\n");
	}
}else{
	printf("Неверно заданы стороны!\n");
}	


system("pause");
	return 0;
}