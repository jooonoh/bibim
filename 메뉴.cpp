#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Ÿ�� ���� ���� �Լ�*/
void TP_menu()
{
	while (1)
	{
	
		int tp_menu;
		printf("1. �� �� ����\n");
		printf("2. ª�� �� ����\n");
		printf("3. Ÿ�� ���� ����\n");
		printf("4. ���� �޴���\n");
		tp_menu = _getch();

		switch (tp_menu) {
		case '1':
		{
			do {

				printf("�� �� ���� ����\n");
				printf("esc�� ������ ���� �޴��� ���ư��ϴ�\n");
				

			} while (_getch() != 27);
			break;
		}

		case '2':
		{
			do {

				printf("ª�� �� ���� ����\n");
				printf("esc�� ������ ���� �޴��� ���ư��ϴ�\n");


			} while (_getch() != 27);
			break;
		}
		case '3':
		{
			do {

				printf("Ÿ�� ���� ���� ����\n");
				printf("esc�� ������ ���� �޴��� ���ư��ϴ�\n");
				

			} while (_getch() != 27);
			break;
		}

		case'4':
			return;
		}


	}
}
void CP_menu()
{
	while (1)
	{
		
		int cp_menu;
		printf("1. C ����\n");
		printf("2. C++ ����\n");
		printf("3. Ÿ�� ���� ����\n");
		printf("4. ���� �޴���\n");
		cp_menu = _getch();

		switch (cp_menu) {
		case '1':
		{
			do {

				printf("C ���� ����\n");
				printf("esc�� ������ ���� �޴��� ���ư��ϴ�\n");


			} while (_getch() != 27);
			break;
		}

		case '2':
		{
			do {

				printf("C++ ���� ����\n");
				printf("esc�� ������ ���� �޴��� ���ư��ϴ�\n");


			} while (_getch() != 27);
			break;
		}
		case '3':
		{
			do {

				printf("Ÿ�� ���� ���� ����\n");
				printf("esc�� ������ ���� �޴��� ���ư��ϴ�\n");


			} while (_getch() != 27);
			break;
		}

		case'4':
			return;
		}


	}


	
}

void rank_menu()
{
	while (1)
	{

		int rank_menu;
		printf("1. �Ϲ� ��ŷ\n");
		printf("2. �ڵ� ��ŷ\n");
		printf("3. ���� �޴���\n");
		rank_menu = _getch();

		switch (rank_menu) {
		case '1':
		{
			do {

				printf("�Ϲ� Ÿ�� ��ŷ ����\n");
				printf("esc�� ������ ���� �޴��� ���ư��ϴ�\n");


			} while (_getch() != 27);
			break;
		}

		case '2':
		{
			do {

				printf("�ڵ� Ÿ�� ��ŷ ����\n");
				printf("esc�� ������ ���� �޴��� ���ư��ϴ�\n");


			} while (_getch() != 27);
			break;
		}
		case '3':
			return;



		}


	}
}
void main()
{


	while (1) {
		int main_menu;
		printf("1. �ѱ� Ÿ�� ����\n");
		printf("2. �ڵ� ����\n");
		printf("3. ��ŷ ����\n");
		printf("4. ����\n");
		printf("5. ���α׷� ����\n");
		main_menu = _getch();
		switch (main_menu) {
		case '1':
			TP_menu();
			break;
		case '2':
			CP_menu();
			break;
		case '3':
			rank_menu();
			break;
		case '4':
			while (1)
			{
				printf("���� ���\n");
				printf("esc�� ������ �����޴��� ���ư��ϴ�.\n");
				if (_getch() == 27)
					break;
			}
			break;
		case '5':
			printf("�ý��� ����\n");
			system("pause");
			return;
		}

	}
}