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
printf("1. 5.1 - 5.4 ������ �� ���������� (�������� � ������)\n");
printf("2. 5.5 ������ �������� � ������ �������\n");
printf("3. 5.6 ������� ����������� ��������\n");
printf("4. 5.7 ������� ������ SWAP ��� ��������\n");
printf("5. 5.8 ������������� ������������\n");
printf("6. 5.9 ���������� �������� ����� ������� �������� ���������� �������\n");
printf("e. ����� ...\n");
printf("0. ���� ...\n");

printf("�������� ����� ����: ");
SW = getchar(); 
printf("\n");

switch (SW)
{
	case '1':
	{
		system("cls");
		book a = { "Wolf", "Allen", 2017,660,7 };
		printf("������ ���������:\n\n");
		print_struct_book(a);
		printf("������ ��������� ����� ���������:\n\n");
		print_struct_book_pointer(&a);

		SW = getchar();
		goto MENU2;
		break;
	}
	case '2':
	{
		system("cls");
		book a[] = { { "Wolf", "Jack", 2017,660,7 },{"Hart", "Jack", 2017,1100,12} };
		printf("������ ������� ��������:\n\n");
		for (int i = 0; i < sizeof(a) / sizeof(book); i++) {
			printf("��������� �%i\n",i+1);
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
		printf("�� COPY:\n\n");
		printf("������ ��������� �1:\n\n");
		print_struct_book(a);

		printf("������ ��������� �2:\n\n");
		print_struct_book(b);

		printf("����� COPY:\n\n");
		copy_struct_book(&a,&b);
		printf("������ ��������� �1:\n\n");
		print_struct_book(a);

		printf("������ ��������� �2:\n\n");
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
		printf("�� SWAP:\n\n");
		printf("������ ��������� �1:\n\n");
		print_struct_book(a);

		printf("������ ��������� �2:\n\n");
		print_struct_book(b);

		printf("����� SWAP:\n\n");
		swap_struct_book(&a,&b);
		printf("������ ��������� �1:\n\n");
		print_struct_book(a);

		printf("������ ��������� �2:\n\n");
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
			printf("������");

		printf("\n\n");

		SW = getchar();
		goto MENU2;
		break;
	}
	case '6':
	{
		system("cls");
		
		book a[2];

		printf("������ ������� �������� ����� ���������� ����������:\n\n");
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
		printf("����� e !\n");
		exit(0);
	}
	default:
	{
			printf("����� �� ���������!!\n");
	}

};


system(" PAUSE");
}
