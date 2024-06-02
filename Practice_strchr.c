#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>

//使用strchr函数查找字符，统计"helloworldhelloworldhelloworld"字符串中字符w的个数及位置
/*
int main()
{
	char* str = "helloworldhelloworldhelloworld";										//str始终指向'h'
	int digit = 0;																		//字符w的个数
	char* location;																		//保存w的位置

	//因为需要计算位置，所以char* str不能改变
	char* search = str;																	//中间指针, 原指针str不能变。search指向str，由search去寻找字符w


	//第一个'w'位于5，5赋值给location，location不等于NULL


	while (  (location = strchr(search, 'w')) != NULL)									//search指向的字符串str中找'w'， 然后赋值给location，当location不等于NULL，执行循环
	{
		digit++;
		printf("the %d 'w'location: %d\n", digit, location-str);						//找到的'w'的地址 － 字符串开始的地址(str)，因此char* str的位置不能改变
		search = location + 1;															//search 是找到的第一个w, location + 1 是下一个位置'o', 从'o'开始往下找，否则会进入死循环
	}
	return 0;
}
*/


