#include "fun1.h"
#include<stdio.h>
void charss()
{
	printf("sdaqweqwd");
}
void printfNumClass(int a[])
{
	int i ;
	printf("Printf Is:\n");
	for (i = 0; a[i]; i++) {
		printf("%d", a[i]);
		if (a[i + 1]) {
			printf(" ,");
		}
		else {
			printf("/n");
			printf("Printf over!");
		}
	}
}
void* getStudentNum(int sum, double* p)
{
	int a[30] = { 0 };
	double score;
	for (int s = 0; s < sum; s++) {
		printf("请输入ID为%的学生的值\n您输入的值是:");
		scanf_s("%d", &score);
		a[s] = score;
		printf("%d 号 : %lf.2分", s, score);
	}
	p = a;
	return p;
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

double average(int sum,double sums)
{
	double avarage;
	if (sums >= 0) {
		avarage = sums / sum;
		avarage = (double)(int)((sums / sum) * 100) / 100;
	}
	else {
		return -1;
	}

}

