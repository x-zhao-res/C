#include<stdio.h>
#include"fun1.h"
int main() {
	int a;
	printf("欢迎来到学生成绩统计系统\n");
	scanf_s("%d", &a);
	printf("你输入的数值是%d", a);
	getchar();
	return 0;

}