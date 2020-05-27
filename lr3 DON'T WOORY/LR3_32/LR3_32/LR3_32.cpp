#include <stdio.h>
#include <process.h>

void n_5_2() {
	int Masint[] = { 1,2,3,4,5,6,7,8,9,10 };
	float Masfloat[] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.11};
	char Maschar[] = {"HelloWorld!"};

	printf("Masint[4]= %i\n", Masint[4]);
	printf("Masfloat[4]= %f\n", Masfloat[4]);
	printf("Maschar[4]= %c\n", Maschar[4]);

	int Matrica[5][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	printf("Matrica[3][2]= %i\n", Matrica[3][2]);
}

void n_5_3() {
	int sum=0,min,index;
	int Masint[5];

	for (int k = 0; k < 5; k++) {
		printf("Введите Masint[%i]: ",k);
		scanf_s("%i", &Masint[k]);
	}

	for (int k = 0; k < 5; k++) {
		sum += Masint[k];
	}

	printf("\nСумма всех элементов массива = %i\n\n",sum);

	for (int k = 0; k < 5; k++) {
		printf("Элемент массива Masint[%i]: %i\n",k, Masint[k]);
	}

	min = Masint[0];
	

	for (int k = 0; k < 5; k++) {
		if (min > Masint[k]) {
			min = Masint[k];
			index = k;
		}
	}

	printf("\nМинимальный элемент массива = %i\n",min);
	printf("Индекс элемент массива = %i\n",index);
}

void main() {
	system("chcp 1251 > nul");

	n_5_2();
	n_5_3();

	system("pause");
}