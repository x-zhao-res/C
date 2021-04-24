#include "fun1.h"
#include<stdio.h>
double searchStudentScore(int id, double(*p)[6], int sums, int sub, char(*cat)[10])
{
	for (int c = 0; c <sub; c++) {
		printf("%d\n", id);
		printf("%s:%lf\n", *(cat + c), *(*(p + id) + sub));
	}
}
double average(double(*p)[6],int sums,int sub, char(*cat)[10])
{
	//2021.4.24
	printf(" 科目 总分 平均分\n");
	double score = 0;
	for (int num = 0; num < sub; num++) {
		printf(" %s: ", *(cat + sub));
		score = 0;
		for (int subs = 0; subs < sums; subs++) {
			score += *(*(p + sums) + sub);
			printf("%.2lf ", score);
		}
		printf("%.2lf\n", (score / sums));
	}
	printf("-------------------------------------------------------");
	printf(" 学号 总分 平均分");
	double studentsNumSum = 0;
	for (int num = 0; num < sums; num++) {
		printf(" %d ",num+1);
		studentsNumSum = 0;
		for (int subs = 0; subs <sub; subs++) {
			studentsNumSum += *(*(p + sums) + sub);
			printf("%.2lf ", studentsNumSum);
		}
		printf("%.2lf\n", (studentsNumSum / sums));
	}
}

void analy(double(*p)[6], int sum, int subs, char(*cat)[10])
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	for (int subjects = 0; subjects < subs; subjects++) {
		a = 0, b = 0, c = 0, d = 0, e = 0;
		for (int c = 0; *(*(p + c)+subjects); c++) {
			if (*(*(p + c) + subjects) < 100 && *(*(p + c) + subjects) >= 90) {
				a++;
			}
			if (*(*(p + c) + subjects) < 90 && *(*(p + c) + subjects) >= 80) {
				b++;
			}
			if (*(*(p + c) + subjects) < 80 && *(*(p + c) + subjects) >= 70) {
				c++;
			}
			if (*(*(p + c) + subjects) < 70 && *(*(p + c) + subjects) >= 60) {
				d++;
			}
			if (*(*(p + c) + subjects) < 60 && *(*(p + c) + subjects) >= 0) {
				e++;
			}
		}
		a = (float)a;
		b = (float)b;
		c = (float)c;
		d = (float)d;
		e = (float)e;
		sum = (float)sum;
		printf(" %s : 优秀：%d,占比%.2lf%%  良好：%d,占比%.2lf%%  中等：%d,占比%.2lf%%  及格：%d,占比%.2lf%%  不及格：%d,占比%.2lf%%\n",*(cat+subjects), a, ((float)a / sum) * 100, b, ((float)b / sum) * 100, c, ((float)c / sum) * 100, d, ((float)d / sum) * 100, e, (float)e / sum) * 100;
	}

}

void LtoH(double (*p)[6],int sub,int sums,int a) {
	if (a == 1) {
		int i, j;
		double* loh = NULL;
		double lohList[30] = { 0 };
		double temp;
		double NumSum;
		loh = lohList;
		for (int num = 0; num < sums; num++) {
			NumSum = 0;
			for (int subs = 0; subs < sub; subs++) {
				NumSum += *(*(p + sums) + sub);
			}
			lohList[num] = NumSum;
		}
		for (i = 0; i < sums - 1; i++) {
			for (j = 0; j < sums - 1 - i; j++) {
				if (*(loh + j) < *(loh + j + 1)) {
					temp = *(loh + j);
					*(loh + j) = *(loh + j + 1);
					*(loh + j + 1) = temp;
				}
			}
		}
		for (int c = 0; c < sums; c++) {
			printf("第%d名的分数：%.2lf\n", c + 1, *(loh + c));
		}
	}
	if (a == 0) {
		int i, j;
		double* loh = NULL;
		double lohList[30] = { 0 };
		double temp;
		double NumSum;
		loh = lohList;
		for (int num = 0; num < sums; num++) {
			NumSum = 0;
			for (int subs = 0; subs < sub; subs++) {
				NumSum += *(*(p + sums) + sub);
			}
			lohList[num] = NumSum;
		}
		for (i = 0; i < sums - 1; i++) {
			for (j = 0; j < sums - 1 - i; j++) {
				if (*(loh + j) > *(loh + j + 1)) {
					temp = *(loh + j);
					*(loh + j) = *(loh + j + 1);
					*(loh + j + 1) = temp;
				}
			}
		}
		for (int c = 0; c < sums; c++) {
			printf("第%d名的分数：%.2lf\n",sums-c, *(loh + c));
		}
	}
}

void getAll(double* p, char name[30][20], int sum)
{
	printf("-----------------------------------------------------------------------------------------------");
	for (int c = 0; c < sum; c++) {
		printf("\n---学号：%d    姓名：%s    分数：%.2lf---\n", c + 1, name[c],*(p + c));
	}
	printf("-----------------------------------------------------------------------------------------------");
}

void textOut()
{
	printf("\n科目录入完毕\n");
	printf("--------------------------------------------------------\n");
	printf("Input 1 To Input record \n\n");
	printf("Input 2 To Calculate total and average score of course\n\n");
	printf("Input 3 To Low To High\n\n");
	printf("Input 4 To High To Low\n\n");
	printf("Input 5 Get All\n\n");
	printf("Input 6 To InPut Name\n\n");
	printf("Input 7 To SearchByID\n\n");
	printf("Input 8 To Analyse All\n\n");	
	printf("1-8 input must Input------ -1 ------To exit\n\n");
}


