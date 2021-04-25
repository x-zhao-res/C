#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include <conio.h>
#include"fun1.h"
int main() {
	int choose,subjects;
	char subjecte[6][10] = { 0 };
	char(*cat)[10] = &subjecte;
	int state = 0;
	char name[30][20] = { 0 };
	double ScoreGet;
	int sum,scSum;
	double scoreList[30][6] = { 0 };
	double (*Score)[6] = &scoreList;
	//30是学生数，6是科目数
	int id = 0;
	printf("Welcome To The Student Score ansyslz System\n\n");
	printf("请输入您班学生总数：\n");
	scanf_s("%d", &sum);
	printf("请输入期末考试科目数\n");
	scanf_s("%d", &subjects);
	if ((sum > 30 || sum <= 0) || (subjects < 0 || subjects>6)) {
		printf("输入有误即将退出");
		return 0;
	}
	printf("请输入科目：\n");
	for (int c = 0; c < subjects; c++) {
		printf("请输入第%d个科目\n", c+1);
		scanf_s("%s", *(cat + c), sizeof(*(cat + c)));
	}
	for (int d = 0; d < subjects; d++) {
		printf("%d.%s  ",d+1,*(cat + d));
	}
	//-----------------------------
	textOut();
	//------------------------------
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
			if (scoreList[1][1]) {
					MessageBox(NULL, TEXT("请不要重复输入"), TEXT("警告"), MB_YESNO);
					break;
				}
			printf("总数：%d  科目：%d科\n", subjects, sum);
			for (int stu = 0; stu < sum; stu++) {
				for (int sub = 0; sub < subjects; sub++) {
					printf("第%d个学生的%s成绩:\n", stu+1, *(cat + sub));
					scanf_s("%lf", (*(scoreList + stu) + sub), sizeof(*(scoreList + stu) + sub));
				}
			}
			printf("录入完毕\n");
			printf(" 学号 ");
			for (int ds = 0; ds < subjects; ds++) {
				printf("  %s  ",*(cat + ds));
			}
			printf("\n");
			for (int stus = 0; stus < sum; stus++) {
				printf("  %d ", stus + 1);
				for (int subs = 0; subs < subjects; subs++) {
					printf("   %.2lf ", *(*(scoreList + stus) + subs));
				}
				printf("\n");
			 }
			break;
			}
			case 2: {
				average(Score, sum,subjects,cat);
				getchar();
				break;
			}
			case 3: {
				LtoH(Score, subjects,sum, 1);
				getchar();
				break;
			}
			case 4: {
				LtoH(Score, subjects,sum, 0);
				getchar();
				break;
			}
			case 5: {
				if (name[0]) {
					getAll(Score, name, sum);
				}
				else {
					printf(" 错误 ");
					break;
				}
				break;
			}
			case 6: {
				if (name[0][0]) {
					MessageBox(NULL, TEXT("请不要重复输入"), TEXT("警告"), MB_YESNO);
					break;
				}
				printf("请根据学生学号录入姓名\n");
				int num = 0;
				char a[30];
				for (int c = 0; c < sum; c++) {
					printf("第%d号学生：", c + 1);
					scanf_s("%s", name[c], sizeof(name[c]));
				}
				printf("\n姓名录入完毕\n");
				for (int k = 0; k < sum; k++) {
					printf("%s\n", name[k]);
				}
				  getchar();
				  break;
			}
			case 7: {
				printf("请输入要查询的学生ID：");
				scanf_s("%d", &id);
				searchStudentScore(id, Score,sum,subjects,cat);
				getchar();
				break;
			}
			case 8: {
				analy(Score, sum,subjects,cat);
				getchar();
				break;
			}
			
			}
		}
	}
}