#include <stdio.h>
#include <process.h>
#include <string.h>
#include <malloc.h>

void n_5_1() {
	char Fam[14] = "�����";
	char Name[20] = "������";
	char Otch[20] = "���������";
	char FIO[56];
	strcpy_s(FIO, Fam);
	strcat_s(FIO, " ");
	strcat_s(FIO, Name);
	strcat_s(FIO, " ");
	strcat_s(FIO, Otch);
	printf("�������  ��� � �������� = %s\n", FIO);
}

void n_5_2() {
	char Fam[14] = "�����";
	char Name[20] = "������";
	char Otch[20] = "���������";
	char FIO[26];

	strcpy_s(FIO, Fam);
	strcat_s(FIO, " ");
	strncat_s(FIO, Name, 1);
	strcat_s(FIO, ".");
	strncat_s(FIO, Otch, 1);
	strcat_s(FIO, ".");
	printf("�������  ��� � �������� = %s\n", FIO);

}

void n_5_3() {
	printf("������� ������� ���� �������� \"�����\"\�\"\n\n");
	char charMas[] = "������ ������� � ����� ��\"\�";
	int RazmS = strlen(charMas);
	printf("�������� ������ =\n%s\n", charMas);
	printf("�������� �� ������ "" ""\n");
	int Counter = 0;
	for (int i = 0; i < RazmS; i++)
	{
		switch (charMas[i])
		{
		case  '�':
		case  '�':
		case  '�':
		case  '�':
		case '�':
		case  '"':
		case '�':
			charMas[i] = ' ';
			Counter++;
			break;
		};
	};
	printf("������ ����� ������ �� ������\n%s\n\n", charMas);
	printf("����� �����= %d \n", Counter);
}

void n_5_4() {
	int MasSize;
	printf("������� ������ ������� �����: ");
	scanf("%d", &MasSize);
	char * pStrArray = (char *)calloc(MasSize, sizeof(char) * 20);
	printf("\n������� ��������������� ������ ������� ����� [%d] �������� �� ����� 20 �������� \n", MasSize);

	for (int i = 0; i < MasSize; i++)
	{
		printf("������� ������ �%d: \n",i+1);
		char Buf[80] = " "" ";
		scanf("%s", Buf);
		if (strlen(Buf) > 20)
		{
			printf("��������� ������ ��������� ������ 20 (%d): \n", strlen(Buf));
			i--;
		}
		else
		{
			strcpy(&pStrArray[i * 20], Buf);
		};
	}
	printf("\n");

	getchar();
	
	printf("������� ��������\n");
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
	char StrPer[] = "�����";
	char cTemp;
	RazmS = strlen(StrPer);
	printf("�������� ������ =\n%s \n", StrPer);
	for (int i = 0; i < RazmS - 1; i+=2)
	{ 
		cTemp = StrPer[i];
		StrPer[i] = StrPer[i+1];
		StrPer[i+1] = cTemp;
	};
	StrPer[RazmS] = '\0';
	printf("�������������� ������ =\n%s\n", StrPer);
}

void n_5_6() {
	char FIO[56];
	strcpy(FIO, "�����");
	strcat(FIO, " "); 
	strcat(FIO, "������");
	strcat(FIO, " "); 
	strcat(FIO, "���������");
	char * pStrD; 
	pStrD = (char *)calloc(40, sizeof(char)); 
	strcpy(pStrD, FIO);
	printf("������������ ������ = %s\n", pStrD);
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
		printf("**	   ������������ ������ �4     **");
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
	printf("1. 5.1 �������� ������� ������\n");
	printf("2. 5.2 ������ � ����������\n");
	printf("3. 5.3 ������ �������� � ������� � ������\n");
	printf("4. 5.4 ���� � ����� ������� �����\n");
	printf("5. 5.5 ��������� ������� �������� � ������\n");
	printf("6. 5.6 ������������ ������\n");
	printf("e. ����� ...\n");
	printf("0. ���� ...\n");
	printf("������� ��������: ");
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
		printf("����� e !\n");
		exit(0);
	}
	default:
	SW = getchar();
		break;
	}


	system("pause");
}