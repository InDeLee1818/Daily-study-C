#include <stdio.h>
#include <string.h>
#pragma warning (4996)


//结构体数组
//计算学生的成绩平均分

typedef struct student
{
	int stu_id;
	char name[20];
	float score;
}STU;																//typedef：给结构体类型重新起名为STU

int main()
{
	STU edu[3] = {
		{101,"Lucy", 78},
		{102, "Bob", 59.5},
		{103, "Tom", 85}
	};

	float sum = 0;
	int arr_subscript;
	for (arr_subscript = 0; arr_subscript < 3; arr_subscript++)		//此循环为元素的遍历
	{
		sum = sum + edu[arr_subscript].score;
	}
	printf("The average score: %f\n", (float)(sum/3));				//78和85均为整数，需要强制转换类型

	return 0;
}