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
void* getStudentNum(int sum, int* p)
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