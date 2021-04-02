#include<stdio.h>
#include"fun1.h"
int main() {
	int choose;
	int state = 0;
	double *ScoreGet;
	int sum,scSum;
	int id;
	printf("Welcome To The Student Score ansyslz System\n\n");
	printf("请输入您班学生总数：\n");
	scanf_s("%d", &sum);
	if ((sum>30 || sum<=0 )) {
		printf("输入有误即将退出");
		return 0;
	}
	printf("Input 1 To 	Input record \n\n");
	printf("Input 2 To Calculate total and average score of course\n\n");
	printf("Input 3 To Sort in descending order by score\n\n");
	printf("Input 4 To Sort in as ending order by score\n\n");
	printf("Input 5 To	Sort in ascending order by number\n\n");
	printf("Input 6 To Search by number\n\n");
	printf("Input 7 To Statistic analysis\n\n");
	printf("Input 8 To GET_ALL_OF_THEM\n\n");
	printf("1-8 input must Input------ -1 ------To exit\n\n");
	for (state = 0; state != -1; state++) {
		printf("Please Choose The Function\n");
		scanf_s("%d", &choose);
		if (choose == -1) {
			state = -2;
			printf("即将退出,按任意键退出");
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
			case 4: {
				printf("4\n");
				getchar();
				break;
			}
			case 5: {
				printf("5\n");
				getchar();
				break;
			}
			case 6: {
				printf("6\n");
				getchar();
				break;
			}
			case 7: {
				printf("7\n");
				getchar();
				break;
			}
			case 8: {
				printf("8\n");
				getchar();
				break;
			}
			
			}
		}
	}
}