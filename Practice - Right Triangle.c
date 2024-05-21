#include <stdio.h>
#include <math.h>
#include <stdbool.h>


/*
已知一个结构体表示三角形，
struct Triangle
{
	int a;
	int b;
	int c;
};
描述:
写一个函数：用于判断 tr 是否为直角三角形
bool is_right(struct Triangle* tr)


再定义一个三角形（三条边为5, 3, 4)，然后判断它是否为直角三角形
*/


struct Triangle
{
	int a;
	int b;
	int c;
};

bool is_right(struct Triangle* tr)
{
	
	int aa = tr->a * tr->a; 
	int bb = tr->b * tr->b; 
	int cc = tr->c * tr->c; 
	

	return aa + bb == cc || aa + cc == bb || bb + cc == aa;
}

int main()
{
	struct Triangle check;
	check.a = 5;
	check.b = 3;
	check.c = 1;

	if (is_right(&check)) //&check 表示变量check的地址
	{
		printf("It is a right triangle\n");
	}
	else
	{
		printf("It is not a right triangle\n");
	}


	return 0;
}