#pragma once


struct book 
{ 
char title[100];	//������������ ����� 
char author[100];	//����� 
int year;	//��� ������� 
int pages;	//���-��  �������
int price;	//��������� 

}; 

void print_file(char *filename);
void print_struct_book_pointer(book* A);
void print_struct_book_from_file(const char* filename);
void write_struct_book(const char* filename, book *a, int razm);
void book_print_mas(book* pWorkMas, int Razm);
void book_file_german(const char * FileName, book ** pMas, int * pRazm);
void book_merge_files(const char * FileMerge, const char * FileName1, const char * FileName2);
void Laba(int);