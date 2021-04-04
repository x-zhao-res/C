#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include <conio.h>
#include"fun1.h"
int main() {
	int choose;
	int state = 0;
	char name[30][20] = { 0 };
	char* names = name;
	double ScoreGet;
	int sum,scSum;
	double scoreList[30] = { 0 };
	double* Score = scoreList;
	int id = 0;
	printf("Welcome To The Student Score ansyslz System\n\n");
	printf("请输入您班学生总数：\n");
	scanf_s("%d", &sum);
	if ((sum>30 || sum<=0 )) {
		printf("输入有误即将退出");
		return 0;
	}
	printf("Input 1 To Input record \n\n");
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
				if (scoreList[1]) {
					MessageBox(NULL, TEXT("请不要重复输入"), TEXT("警告"),MB_YESNO);
					break;
				}
				printf("您班学生总数为：%d\n请从第1号开始录入分数\n", sum);
				for (int k = 0 ; k < sum; k++) {
					printf("请输入第%d位学生的数据:", k + 1);
					scanf_s("%lf",&ScoreGet);
					*(Score + k) = ScoreGet;
					printf("第%d号，%.2lf分\n",k+1, *(Score + k));
				}
				printf("数据录入完毕,请查看学生列表");
				for (int c = 0; c < sum; c++)
				{
					printf("\n第%d名-分数:%.2lf\n", c+1,*(Score + c));
				}
				getchar();
				break;
			 }
			case 2: {
				average(Score, sum);
				getchar();
				break;
			}
			case 3: {
				LtoH(Score, sum,1);
				getchar();
				break;
			}
			case 4: {
				LtoH(Score, sum, 0);
				getchar();
				break;
			}
			case 5: {
				printf("请按照学号输入对应学生的名字\n");
				char a[20];
				for (int s = 0; s < sum; s++) {
					printf("第%d位学生名字：", s + 1);
					printf("学号：%d——学生：%s——分数：%.2lf\n", s + 1, name[s], *(Score + s));
				}
				printf("按下U/u键获取全部列表，按任意键退出");
				if (_kbhit()) {
					if (_getch() == 117 || _getch() == 85) {
						for (int c = 0; c < sum; c++) {
							printf("学号：%d——学生：%s——分数：%.2lf\n", c + 1, name[c], *(Score + c));
						}
					}
					else
					{
						break;
					}
				}
				getchar();
				break;
			}
			case 6: {
			
				getchar();
				break;
			}
			case 7: {
				printf("请输入要查询的学生ID：");
				scanf_s("%d", &id);
				searchStudentScore(id, Score);
				getchar();
				break;
			}
			case 8: {
				analy(Score, sum);
				getchar();
				break;
			}
			
			}
		}
	}
}