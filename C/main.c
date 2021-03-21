#include<stdio.h>
#include"fun1.h"
int main() {
	int choose;
	int state = 0;
	int *ScoreGet;
	printf("Welcome To The Student Score ansyslz System\n\n");
	printf("Input 1 To Get Every Student Score By Id \n\n");
	printf("Input 2 To Make Table About Sum And  ES\n\n");
	printf("Input 3 To Printf  High To Low\n\n");
	printf("Input 4 To Printf Low To High\n\n");
	printf("Input 5 To Printf Low To High By Id\n\n");
	printf("Input 6 To Get num From All And Score\n\n");
	printf("Input 7 To Get Anlalisy\n\n");
	printf("GET_ALL_OF_THEM\n\n");
	printf("1-8 input must\n\n");
	for (state = 0; state != -1; state++) {
		printf("Please Choose The Function\n");
		scanf_s("%d", &choose);
		if (choose == -1) {
			state = -2;
			printf("即将退出,按任意键退出");
			getchar();
			getchar();
		}
		if (!(choose >= 1 && choose <= 8)) {
			printf(" Wrong,Plaese Input You Choose Again");
		}
		else {
			switch (choose)
			{
			case 1: {
				printf("1\n");
				getchar();
				break;
			 }
			case 2: {
				printf("2\n");
				getchar();
				break;
			}
			case 3: {
				printf("3\n");
				getchar();
				break;
			}
			
			}
		}
	}
}