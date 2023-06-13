#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
void wakeup();
void egg();
void Shaking();
int main() {
	printf("다마고치야\n");
	//20칸                              20칸
	printf("                      ■■■■                    \n");
	printf("                    ■■■■■■                    \n");
		//18칸                                        16칸
	printf("                   ■■■■■■■                  \n");

	printf("                  ■■■■■  ■■                  \n");
	printf("                  ■■■■■■■■                  \n");
	printf("                  ■■■■■■  ■                  \n");
	printf("                  ■■■■■■  ■                  \n");
	printf("                  ■■■■■■■■                  \n");
	printf("                  ■■■■■■■■                  \n");
	printf("                   ■■■■■■■                  \n");

	int color;
	char knock=0;
	printf("병아리 색을 골라주세요\n 빨강 : 1\n하양 : 2\n노랑 : 3\n");
	scanf("%d", &color);
	switch (color)
	{
	case 1: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		egg();
		printf("빨간색을 고르셨습니다 !!!!!");
		printf("병아리가 언제 태어나지..?\n두드려볼까?\n두드린다 : O\n두드리지말자 : X\n");
		scanf(" %c", &knock);

		if (knock=='\0') {
			printf("똑바로 말하셈");
		}
		else if (knock == 'O') {
			wakeup();

			printf("병아리가 안나온다..다시 두드려볼까?\n두드린다 : O\n두드리지말자 :X\n");
			knock = 0;
			scanf(" %c", &knock);
			if (knock == 'O') {
				printf("엇..너무 세게쳤다...\n알이 깨지고말았다\n병아리가 죽었다....미안해 병아리야\n");
				printf("-----------------------------------GAME OVER------------------------------------\n");
				return 0;
			}
			else if (knock == 'X') {
				printf("오! 알이 흔들리기 시작했다!\n");
				Shaking();
			}
		}

		break;
	case 2: 
		egg();
		printf("하얀색을 고르셨습니다 !!!!!");
		break;
	case 3: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		egg();
		printf("노란색을 고르셨습니다 !!!!!");
		break;
	default:
		break;
	}

}
void egg() {
	printf("                      ■■■■                    \n");
	printf("                    ■■■■■■                    \n");
	//18칸                                        16칸
	printf("                   ■■■■■■■                  \n");

	printf("                  ■■■■■  ■■                  \n");
	printf("                  ■■■■■■■■                  \n");
	printf("                  ■■■■■■  ■                  \n");
	printf("                  ■■■■■■  ■                  \n");
	printf("                  ■■■■■■■■                  \n");
	printf("                  ■■■■■■■■                  \n");
	printf("                   ■■■■■■■                  \n");
}
void wakeup() {
	printf("●");
	Sleep(1000);
	printf("●");
	Sleep(1000);
	printf("●\n");
}

void Shaking() {
	printf("                         ■■■■                    \n");
	printf("                       ■■■■■■                    \n");
	//18칸                                        16칸
	printf("                      ■■■■■■■                  \n");

	printf("                     ■■■■■  ■■                  \n");
	printf("                     ■■■■■■■■                  \n");
	printf("                     ■■■■■■  ■                  \n");
	printf("                     ■■■■■■  ■                  \n");
	printf("                     ■■■■■■■■                  \n");
	printf("                     ■■■■■■■■                  \n");
	printf("                      ■■■■■■■                  \n");
	Sleep(300);
	system("cls");
	printf("                   ■■■■                    \n");
	printf("                 ■■■■■■                    \n");
	//18칸                                      16칸
	printf("                ■■■■■■■                  \n");

	printf("               ■■■■■  ■■                  \n");
	printf("               ■■■■■■■■                  \n");
	printf("               ■■■■■■  ■                  \n");
	printf("               ■■■■■■  ■                  \n");
	printf("               ■■■■■■■■                  \n");
	printf("               ■■■■■■■■                  \n");
	printf("                ■■■■■■■                  \n");

	printf("                       ■■■■                    \n");
	printf("                     ■■■■■■                    \n");
	//18칸                                        16칸
	printf("                    ■■■■■■■                  \n");

	printf("                   ■■■■■  ■■                  \n");
	printf("                   ■■■■■■■■                  \n");
	printf("                   ■■■■■■  ■                  \n");
	printf("                   ■■■■■■  ■                  \n");
	printf("                   ■■■■■■■■                  \n");
	printf("                   ■■■■■■■■                  \n");
	printf("                    ■■■■■■■                  \n");
}

