#pragma once
#include <stdio.h>
#include <process.h>
#include <string.h>

struct book { 
char title[100];	//������������ ����� 
char author[100];	//����� 
int year;	//��� ������� 
int pages;	//���-��  �������
int price;	//��������� 

}; 

void print_struct_book(book A);
void print_struct_book_pointer(book* A);
void copy_struct_book(book* A, book* B);
void swap_struct_book(book* A, book* B);
void Laba(int laba);
