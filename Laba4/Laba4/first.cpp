#include <stdio.h>
#include <process.h>
#include <string.h>
#include <malloc.h>

void n_5_1() {
	char Fam[14] = "Гусев";
	char Name[20] = "Сергей";
	char Otch[20] = "Романович";
	char FIO[56];
	strcpy_s(FIO, Fam);
	strcat_s(FIO, " ");
	strcat_s(FIO, Name);
	strcat_s(FIO, " ");
	strcat_s(FIO, Otch);
	printf("Фамилия  имя и отчество = %s\n", FIO);
}

void n_5_2() {
	char Fam[14] = "Гусев";
	char Name[20] = "Сергей";
	char Otch[20] = "Романович";
	char FIO[26];

	strcpy_s(FIO, Fam);
	strcat_s(FIO, " ");
	strncat_s(FIO, Name, 1);
	strcat_s(FIO, ".");
	strncat_s(FIO, Otch, 1);
	strcat_s(FIO, ".");
	printf("Фамилия  имя и отчество = %s\n", FIO);

}

void n_5_3() {
	printf("Символы которые надо заменить \"иклмн\"\№\"\n\n");
	char charMas[] = "хорошо учиться в школе нк\"\№";
	int RazmS = strlen(charMas);
	printf("Исходная строка =\n%s\n", charMas);
	printf("Заменяем на символ "" ""\n");
	int Counter = 0;
	for (int i = 0; i < RazmS; i++)
	{
		switch (charMas[i])
		{
		case  'и':
		case  'к':
		case  'л':
		case  'м':
		case 'н':
		case  '"':
		case '№':
			charMas[i] = ' ';
			Counter++;
			break;
		};
	};
	printf("Строка после замены на пробел\n%s\n\n", charMas);
	printf("Число замен= %d \n", Counter);
}

void n_5_4() {
	int MasSize;
	printf("Введите размер массива строк: ");
	scanf("%d", &MasSize);
	char * pStrArray = (char *)calloc(MasSize, sizeof(char) * 20);
	printf("\nВведите последовательно строки массива строк [%d] размером не более 20 символов \n", MasSize);

	for (int i = 0; i < MasSize; i++)
	{
		printf("Введите сторку №%d: \n",i+1);
		char Buf[80] = " "" ";
		scanf("%s", Buf);
		if (strlen(Buf) > 20)
		{
			printf("Введенная строка превышает размер 20 (%d): \n", strlen(Buf));
			i--;
		}
		else
		{
			strcpy(&pStrArray[i * 20], Buf);
		};
	}
	printf("\n");

	getchar();
	
	printf("Порядок Обратный\n");
	printf("..........................\n"); 

	for (int i = MasSize - 1; i >= 0; i--)
	{
		printf(".   [%d ]  .  %10s  .\n", i, &pStrArray[i * 20]);
	};
	printf("..........................\n"); 
	printf("\n");
	free(pStrArray);

}


void n_5_5() {
	int RazmS;
	char StrPer[] = "Линия";
	char cTemp;
	RazmS = strlen(StrPer);
	printf("Исходная строка =\n%s \n", StrPer);
	for (int i = 0; i < RazmS - 1; i+=2)
	{ 
		cTemp = StrPer[i];
		StrPer[i] = StrPer[i+1];
		StrPer[i+1] = cTemp;
	};
	StrPer[RazmS] = '\0';
	printf("Результирующая строка =\n%s\n", StrPer);
}

void n_5_6() {
	char FIO[56];
	strcpy(FIO, "Гусев");
	strcat(FIO, " "); 
	strcat(FIO, "Сергей");
	strcat(FIO, " "); 
	strcat(FIO, "Романович");
	char * pStrD; 
	pStrD = (char *)calloc(40, sizeof(char)); 
	strcpy(pStrD, FIO);
	printf("Динамическая строка = %s\n", pStrD);
	free(pStrD);
}

void Laba() {
	for (int i = 0; i < 20; i++) {
		printf(" ");
	}
	for (int i = 0; i < 36; i++) {
		printf(" ");
	}
		printf("\n");
	for (int i = 0; i < 20; i++) {
		printf(" ");
	}
		printf("**	   Лабораторная работа №4     **");
		printf("\n");
	for (int i = 0; i < 20; i++) {
		printf(" ");
	}
	for (int i = 0; i < 36; i++) {
		printf("*");
	}
		printf("\n");
}

void main() {
	system("chcp 1251 > nul");
	int n;
	Laba();
MENU:;
	printf("\n\n");
	printf("1. 5.1 Создание большой строки\n");
	printf("2. 5.2 Строка с инициалами\n");
	printf("3. 5.3 Замена символов и подсчет в строке\n");
	printf("4. 5.4 Ввод и вывод массива строк\n");
	printf("5. 5.5 Изменение порядка символов в строке\n");
	printf("6. 5.6 Динамические строки\n");
	printf("e. Выход ...\n");
	printf("0. Меню ...\n");
	printf("ВВедите значение: ");
	char SW;
	SW = getchar();
	printf("\n\n");

	switch (SW)
	{
	case '1':{
	SW = getchar();
		n_5_1();
		goto MENU;
		break;
	}
	case '2':{
	SW = getchar();
		n_5_2();
		goto MENU;
		break;
	}
	case '3':{
	SW = getchar();
		n_5_3();
		goto MENU;
		break;
	}
	case '4':{
	SW = getchar();
		n_5_4();
		goto MENU;
		break;
	}
	case '5':{
	SW = getchar();
		n_5_5();
		goto MENU;
		break;
	}
	case '6':{
	SW = getchar();
		n_5_6();
		goto MENU;
		break;
	}
	case '0':
	{
		printf("menu!\n");
		SW = getchar();
		goto MENU;
		break;
	}
	case 'e':
	{
		printf("Выбор e !\n");
		exit(0);
	}
	default:
	SW = getchar();
		break;
	}


	system("pause");
}