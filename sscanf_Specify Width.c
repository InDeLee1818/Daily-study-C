#pragma warning(disable:4996)
#include <stdio.h>



//读取指定宽度的数据
int main()
{
	char arr1[20];
	sscanf("12345678", "%s", arr1);
	printf("arr1 = %s\n", arr1);		//打印结果为：12345678

	char arr2[20];
	sscanf("12345678", "%3s", arr2);	//指定宽度, %3s: 从字符串当作获取3个字符
	printf("arr2 = %s\n", arr2);		//打印结果为：123

	int num;
	sscanf("12345678", "%4d", &num);	//指定宽度, %4d: 从字符串当作获取4个字符
	printf("num = %d\n", num);			//打印结果为：1234

	char arr3[20];
	sscanf("abcdefg", "%s", arr3);
	printf("arr3 = %s\n", arr3);		//打印结果为：abcdefg

	char arr4[20];
	sscanf("abcdefg", "%6s", arr4);		//指定宽度, %6s: 从字符串当作获取6个字符
	printf("arr4 = %s\n", arr4);		//打印结果为：abcdef

	char arr5[20];
	sscanf("a1b2c3d4e5f6", "%4s", arr5);//指定宽度, %4s: 从字符串当作获取4个字符
	printf("arr5 = %s\n", arr5);		//打印结果为：a1b2
	return 0;
}