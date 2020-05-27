#include <stdio.h>
#include <io.h>
#include <string.h>
#include <malloc.h>
#include "Header.h"

void print_file(char *filename) {
	FILE *p;
	char buf[80];
	p = fopen(filename, "r");
	while (!feof(p)) {
		fgets(buf, 79, p);
		if (!feof(p)) {
			printf("%s", buf);
		}
	}
	fclose(p);
}

void print_struct_book_pointer(book* A)
{
printf("Наименование книги: %s\n", A->title); 
printf("Автор книги: %s\n", A->author); 
printf("Год издания книги: %d\n", A->year); 
printf("Кол-во страниц в  книге: %d\n", A->pages); 
printf("Cтоимость  книги: %d\n", A->price); 
}
void print_struct_book_from_file(const char* filename) {
	book temp;
	FILE *p = fopen(filename, "rb");
	if (p != NULL)
		while (!feof(p))
		{
			fread(&temp, sizeof(book), 1, p);
			if (!feof(p))
				print_struct_book_pointer(&temp);
		};
	fclose(p);
}

void write_struct_book(const char* filename, book *a, int razm) {
	FILE * pF;
	pF = fopen(filename, "w+b");
	for (int i = 0; i < razm; i++)
		fwrite(a + i, sizeof(book), 1, pF);
	fclose(pF);
}

void book_print_mas(book* pWorkMas, int Razm) {
	for (int i = 0; i < Razm; i++)
		print_struct_book_pointer(pWorkMas + i);
}

void book_file_german(const char * FileName, book ** pMas, int * pRazm)
{
	FILE * pF;
	pF = fopen(FileName, "rb");
	*pRazm = _filelength(pF->_file) / sizeof(book);
	book SBuf;
	*pMas = (book *)calloc(*pRazm, sizeof(book));
	int i = 0;
	while (!feof(pF))  // Проверка конца файла     
	{
		fread(&SBuf, sizeof(book), 1, pF); // чтение одной записи
		if (!feof(pF))
		{
			memcpy(*pMas + i, &SBuf, sizeof(book)); i++;
		};
	};
	fclose(pF);
};

void book_merge_files(const char * FileMerge, const char * FileName1, const char * FileName2)
{
	FILE * pF1;
	FILE * pF2;
	FILE * pFMerge;
	book SBuf;
	int flag = 0;
	pF1 = fopen(FileName1, "rb"); // Открытие 1 для чтения
	pF2 = fopen(FileName2, "rb"); // Открытие 1 для чтения
	pFMerge = fopen(FileMerge, "w+b");
	while (!feof(pF1))
	{
		fread(&SBuf, sizeof(book), 1, pF1); // чтение одной записи файл 1
		if (!feof(pF1))
			fwrite(&SBuf, sizeof(book), 1, pFMerge);
	};
	while (!feof(pF2))
	{
		fread(&SBuf, sizeof(book), 1, pF2); // чтение одной записи файл 2
		if (!feof(pF2))
			fwrite(&SBuf, sizeof(book), 1, pFMerge);
	};
	fclose(pF1);
	fclose(pF2);
	fclose(pFMerge);
};

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
	printf("**	   Лабораторная работа №%i     **", laba);
	printf("\n");
	for (int i = 0; i < 20; i++) {
		printf(" ");
	}
	for (int i = 0; i < 36; i++) {
		printf("*");
	}
	printf("\n");
}