#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
void wakeup();
void egg();
void Shaking();
int main() {
	printf("�ٸ���ġ��\n");
	//20ĭ                              20ĭ
	printf("                      �����                    \n");
	printf("                    �������                    \n");
		//18ĭ                                        16ĭ
	printf("                   ��������                  \n");

	printf("                  ������  ���                  \n");
	printf("                  ���������                  \n");
	printf("                  �������  ��                  \n");
	printf("                  �������  ��                  \n");
	printf("                  ���������                  \n");
	printf("                  ���������                  \n");
	printf("                   ��������                  \n");

	int color;
	char knock=0;
	printf("���Ƹ� ���� ����ּ���\n ���� : 1\n�Ͼ� : 2\n��� : 3\n");
	scanf("%d", &color);
	switch (color)
	{
	case 1: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		egg();
		printf("�������� ���̽��ϴ� !!!!!");
		printf("���Ƹ��� ���� �¾��..?\n�ε������?\n�ε帰�� : O\n�ε帮������ : X\n");
		scanf(" %c", &knock);

		if (knock=='\0') {
			printf("�ȹٷ� ���ϼ�");
		}
		else if (knock == 'O') {
			wakeup();

			printf("���Ƹ��� �ȳ��´�..�ٽ� �ε������?\n�ε帰�� : O\n�ε帮������ :X\n");
			knock = 0;
			scanf(" %c", &knock);
			if (knock == 'O') {
				printf("��..�ʹ� �����ƴ�...\n���� �������Ҵ�\n���Ƹ��� �׾���....�̾��� ���Ƹ���\n");
				printf("-----------------------------------GAME OVER------------------------------------\n");
				return 0;
			}
			else if (knock == 'X') {
				printf("��! ���� ��鸮�� �����ߴ�!\n");
				Shaking();
			}
		}

		break;
	case 2: 
		egg();
		printf("�Ͼ���� ���̽��ϴ� !!!!!");
		break;
	case 3: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		egg();
		printf("������� ���̽��ϴ� !!!!!");
		break;
	default:
		break;
	}

}
void egg() {
	printf("                      �����                    \n");
	printf("                    �������                    \n");
	//18ĭ                                        16ĭ
	printf("                   ��������                  \n");

	printf("                  ������  ���                  \n");
	printf("                  ���������                  \n");
	printf("                  �������  ��                  \n");
	printf("                  �������  ��                  \n");
	printf("                  ���������                  \n");
	printf("                  ���������                  \n");
	printf("                   ��������                  \n");
}
void wakeup() {
	printf("��");
	Sleep(1000);
	printf("��");
	Sleep(1000);
	printf("��\n");
}

void Shaking() {
	printf("                         �����                    \n");
	printf("                       �������                    \n");
	//18ĭ                                        16ĭ
	printf("                      ��������                  \n");

	printf("                     ������  ���                  \n");
	printf("                     ���������                  \n");
	printf("                     �������  ��                  \n");
	printf("                     �������  ��                  \n");
	printf("                     ���������                  \n");
	printf("                     ���������                  \n");
	printf("                      ��������                  \n");
	Sleep(300);
	system("cls");
	printf("                   �����                    \n");
	printf("                 �������                    \n");
	//18ĭ                                      16ĭ
	printf("                ��������                  \n");

	printf("               ������  ���                  \n");
	printf("               ���������                  \n");
	printf("               �������  ��                  \n");
	printf("               �������  ��                  \n");
	printf("               ���������                  \n");
	printf("               ���������                  \n");
	printf("                ��������                  \n");

	printf("                       �����                    \n");
	printf("                     �������                    \n");
	//18ĭ                                        16ĭ
	printf("                    ��������                  \n");

	printf("                   ������  ���                  \n");
	printf("                   ���������                  \n");
	printf("                   �������  ��                  \n");
	printf("                   �������  ��                  \n");
	printf("                   ���������                  \n");
	printf("                   ���������                  \n");
	printf("                    ��������                  \n");
}

