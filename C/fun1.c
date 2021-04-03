#include "fun1.h"
#include<stdio.h>
void charss()
{
	printf("sdaqweqwd");
}
void printfNumClass(double *p)
{
	int i ;
	printf("Printf Is:\n");
	for (i = 0; *(p+i); i++) {
		printf("%lf", *(p+i));
		if (*(p+i+1)) {
			printf(" ,");
		}
		else {
			printf("/n");
			printf("Printf over!");
		}
	}
}
double searchStudentScore(int id,double *a)
{
	int Score;
	Score = *(a + id);
	if (Score == -1) {
		return -1;
	}
	else {
		return Score;
	}
}

double Sum(double* sum)
{
	int x = 0;
	int Score = 0;
	for (x = 0; x != -1; x++) {
		if (!(*(sum + x))) {
			x = -2; 
		}
		else {
			Score += *(sum + x);
		}
	}
	return Score;
}

double average(double *p,int sums)
{
	double sum = 0;
	for (int k = 0;*(p+k); k++) {
		sum += *(p + k);
	}
	printf("\n%d位学生总分为%.2lf\n",sums, sum);
	printf("平均分为%.2lf\n", (sum / sums));
}

void analy(double* p,int sum)
{
	int a =0, b = 0, c = 0, d = 0, e = 0 ;
	for (int c = 0; *(p + c); c++) {
		if (*(p + c) < 100 && *(p + c) >= 90) {
			a++;
		}
		if (*(p + c) < 90 && *(p + c) >= 80) {
			b++;
		}
		if (*(p + c) <80 && *(p + c) >= 70) {
			c++;
		}
		if (*(p + c) < 70 && *(p + c) >= 60) {
			d++;
		}
		if (*(p + c) < 60 && *(p + c) >= 0) {
			e++;
		}
	}
	a = (float)a;
	b = (float)b;
	c = (float)c;
	d = (float)d;
	e = (float)e;
	sum = (float)sum;
	printf("优秀：%d,占比%.2lf\n良好：%d,占比%.2lf\n中等：%d,占比%.2lf\n及格：%d,占比%.2lf\n不及格：%d,占比%.2lf\n", a, (float)a/sum, b,(float)b/sum, c, (float)c/sum, d,(float)d/sum, e, (float)e/sum);
}

void LtoH(double* p,int sums,int a) {
	if (a == 1) {
		int i, j;
		double* loh = NULL;
		double lohList[30] = { 0 };
		double temp;
		loh = lohList;
		for (int k = 0; *(p + k); k++) {
			lohList[k] = *(p + k);
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
			printf("排名第%d名的分数：%.2lf\n", c + 1, *(loh + c));
		}
	}
	if (a == 0) {
		int i, j;
		double* loh = NULL;
		double lohList[30] = { 0 };
		double temp;
		loh = lohList;
		for (int k = 0; *(p + k); k++) {
			lohList[k] = *(p + k);
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
			printf("倒数第%d名的分数：%.2lf\n", c + 1, *(loh + c));
		}
	}
}


