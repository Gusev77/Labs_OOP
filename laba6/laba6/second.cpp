#include "Header.h"

void print_struct_book(book A) {
printf("������������ �����: %s\n", A.title); 
printf("����� �����: %s\n", A.author); 
printf("��� ������� �����: %i\n", A.year); 
printf("���-�� ������� �  �����: %i\n", A.pages); 
printf("���������  �����: %i\n", A.price); 
}

void print_struct_book_pointer(book* A) {
printf("������������ �����: %s\n", A->title); 
printf("����� �����: %s\n", A->author); 
printf("��� ������� �����: %i\n", A->year); 
printf("���-�� ������� �  �����: %i\n", A->pages); 
printf("���������  �����: %i\n", A->price); 
}

void copy_struct_book(book* A,book* B) {
	strcpy_s(A->title, B->title);
	strcpy_s(A->author, B->author);
	A->year = B->year;
	A->pages = B->pages;
	A->price = B->price;
}

void swap_struct_book(book* A,book* B) {
	book atemp;
	copy_struct_book(&atemp,A);
	copy_struct_book(A,B);
	copy_struct_book(B,&atemp);
}

void Laba(int laba) {
	for (int i = 0; i < 20; i++) {
		printf(" ");
	}
	for (int i = 0; i < 36; i++) {
		printf("*");
	}
	printf("\n");
	for (int i = 0; i < 20; i++) {
		printf(" ");
	}
	printf("**	   ������������ ������ �%i     **",laba);
	printf("\n");
	for (int i = 0; i < 20; i++) {
		printf(" ");
	}
	for (int i = 0; i < 36; i++) {
		printf("*");
	}
	printf("\n");
}