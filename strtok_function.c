#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



/*
strtok：字符串切割函数

头文件：#include <string.h>
函数声明：char* strtok (char* str, const char* delim);
函数的功能：字符串切割，按照delim指向的字符串中的字符，切割str指向的字符串。其实就是在str指向的字符串中发现了delim字符串中的字符，就将其变成'\0'，调用一次strtok只切割一次，切割一次之后，再去切割的时候strtok的第一个参数传NULL，意思是借着上次切割的位置继续切。

注意，如果str字符串中出现了连续的几个delim中的字符，如(,,,.)，则只将第一个字符变成'\0'，即(\0,,.)。

*/

int main()
{
	char in_fo[100] = "xiaoming:21,,,.boy.girl,beijing:haidian";
	//1: xiaoming
	//2: 21
	//3: boy
	//4: girl
	//5: beijing
	//6: haidian
	//7: NULL
	char* ptr[7]; //使用指针数组去存放切出来的字符串的首地址, 6个字符串 + NULL

	int i = 0;
	int j;
	printf("in_fo = %s\n", in_fo);	//before

	ptr[i] = strtok(in_fo, ":,.");
	printf("ptr[%d] = %s\n", i, ptr[i]);
	printf("in_fo = %s\n", in_fo);	//after .......... replace ':' to '\0'

	while (ptr[i] != NULL)
	{
		i++;
		ptr[i] = strtok(NULL, ":,.");	//再去切割的时候strtok的第一个参数传NULL
	}

	for (j = 0; j < i; j++)
	{
		printf("ptr[%d] = %s\n", j, ptr[j]);	//打印切出来的字符串的首地址
	}


	printf("ptr[1]+3 = %s\n", ptr[1] + 3);	//ptr[1]指向的是2，不是21, ptr[1]+3指向的是第二个',' 前面的','被改为'\0'
	//其结果为",,.boy", 验证了只将第一个字符变成'\0'.
	return 0;
}