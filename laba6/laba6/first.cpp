#include <stdlib.h>
#include <stdio.h> 
#include <time.h>
#include <process.h> 
#include "Header.h"

#define n 2
enum month { january, february, march, april, may, june, july, august, semptember, october, november, december};


int main(){
	srand(time(0));
	system("chcp 1251 > nul");
	Laba(6);
char SW;

MENU2:;
printf("1. 5.1 - 5.4 Работа со структурой (создание и печать)\n");
printf("2. 5.5 Массив структур и печать массива\n");
printf("3. 5.6 Функция копирования структур\n");
printf("4. 5.7 Функция обмена SWAP для структур\n");
printf("5. 5.8 Использование перечисления\n");
printf("6. 5.9 Заполнение числовых полей массива структур случайными числами\n");
printf("e. Выход ...\n");
printf("0. Меню ...\n");

printf("Выберете пункт меню: ");
SW = getchar(); 
printf("\n");

switch (SW)
{
	case '1':
	{
		system("cls");
		book a = { "Wolf", "Allen", 2017,660,7 };
		printf("Печать структуры:\n\n");
		print_struct_book(a);
		printf("Печать структуры через указатель:\n\n");
		print_struct_book_pointer(&a);

		SW = getchar();
		goto MENU2;
		break;
	}
	case '2':
	{
		system("cls");
		book a[] = { { "Wolf", "Jack", 2017,660,7 },{"Hart", "Jack", 2017,1100,12} };
		printf("Печать массива структур:\n\n");
		for (int i = 0; i < sizeof(a) / sizeof(book); i++) {
			printf("Структура №%i\n",i+1);
			print_struct_book(a[i]);
		}

		SW = getchar();
		goto MENU2;
		break;
	}
	case '3':
	{
		system("cls");

		book a = {"Wolf", "Jack", 2017,660,7 };
		book b = { "Hart", "Jack", 2017,1100,12 };
		printf("ДО COPY:\n\n");
		printf("Печать структуры №1:\n\n");
		print_struct_book(a);

		printf("Печать структуры №2:\n\n");
		print_struct_book(b);

		printf("ПОСЛЕ COPY:\n\n");
		copy_struct_book(&a,&b);
		printf("Печать структуры №1:\n\n");
		print_struct_book(a);

		printf("Печать структуры №2:\n\n");
		print_struct_book(b);

		SW = getchar();
		goto MENU2;
		break;
	}
	case '4':
	{
		system("cls");

		book a = { "Wolf", "Jack", 2017,660,7 };
		book b = { "Hart", "Jack", 2017,1100,12 };
		printf("ДО SWAP:\n\n");
		printf("Печать структуры №1:\n\n");
		print_struct_book(a);

		printf("Печать структуры №2:\n\n");
		print_struct_book(b);

		printf("ПОСЛЕ SWAP:\n\n");
		swap_struct_book(&a,&b);
		printf("Печать структуры №1:\n\n");
		print_struct_book(a);

		printf("Печать структуры №2:\n\n");
		print_struct_book(b);

		SW = getchar();
		goto MENU2;
		break;
	}
	case '5':
	{
		system("cls");
		
		int month = january;
		if (month == january)
			printf("Январь");

		printf("\n\n");

		SW = getchar();
		goto MENU2;
		break;
	}
	case '6':
	{
		system("cls");
		
		book a[2];

		printf("Печать массива структур после рандомного заполнения:\n\n");
		for (int i = 0; i < sizeof(a) / sizeof(book); i++) {
			strcpy_s(a[i].title,"book");
			strcpy_s(a[i].author,"autor");
			a[i].year = rand() % 18 + 2000;
			a[i].price = 100000.0f * 10.0f * rand()/RAND_MAX;
			a[i].pages = rand() % 6 * 1.25f + 5;
		}
		for (int i = 0; i < sizeof(a) / sizeof(book); i++) {
			print_struct_book(a[i]);
		}

		SW = getchar();
		goto MENU2;
		break;
	}
	case '0':
	{
		system("cls");
		printf("menu!\n\n");
		SW = getchar();
		goto MENU2;
		break;
		break;
	}
	case 'e':
	{
		system("cls");
		printf("Выбор e !\n");
		exit(0);
	}
	default:
	{
			printf("Выбор по умолчанию!!\n");
	}

};


system(" PAUSE");
}
