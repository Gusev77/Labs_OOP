
#include <stdio.h>

int Summa3(int a, int b, int c, int * psum)
{
	*psum = (a + b + c);
	return  *psum;
};

void PrintMas(double * pMas, int Razm)
{
	for (int i = 0; i < Razm; i++)
	{
		printf(" Ёлемент [%i]  = %4.2lf  \n", i, pMas[i]);
	};
};


void PrintMas_int(int * pMas, int Razm)
{
	for (int i = 0; i < Razm; i++)
	{
		printf(" Ёлемент [%i]  = %d  \n", i, pMas[i]);
	};
};

void SWAP(double * a, double * b)
{
	double Temp;
	Temp = *a;
	*a = *b;
	*b = Temp;
};

int MinMas(int * iMas, int Razm, int * Min1, int * Num)
{
	int TempMin;
	int NumMin = 0;
	TempMin = iMas[0];
	for (int i = 1; i < Razm; i++)
		if (TempMin > iMas[i])
		{
			TempMin = iMas[i]; NumMin = i;
		}

	*Min1 = TempMin;
	*Num = NumMin;
	return *Min1;
};

void SWAP2(int * a, int * b)
{
	int Temp;
	Temp = *a;
	*a = *b;
	*b = Temp;
};


