#pragma once
#include <stdio.h>
#include <process.h>
#include <string.h>

struct book { 
char title[100];	//наименование книги 
char author[100];	//автор 
int year;	//год издания 
int pages;	//кол-во  страниц
int price;	//стоимость 

}; 

void print_struct_book(book A);
void print_struct_book_pointer(book* A);
void copy_struct_book(book* A, book* B);
void swap_struct_book(book* A, book* B);
void Laba(int laba);
