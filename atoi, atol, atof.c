#include <stdio.h>
#include <stdlib.h>


/*
atoi/atol/atof 为字符串转换功能
头文件: #include <stdlib.h>
函数的声明: int atoi(const char* nptr);
函数的功能: 
atoi			将nptr指向的字符串转换成整数，返回。
atol			将nptr指向的字符串转换成长整型，返回。
atof			将nptr指向的字符串转换成浮点型，返回。

返回值: 转换后的整数，此值由将输入字符作为数字解析而生成。如果该输入无法转换为该类型的值，则atoi, atol, atof的返回值为0。
*/

int main()
{
	int test_num1;
	test_num1 = atoi("123");
	printf("test_num1: %d\n", test_num1);

	int test_num2;
	test_num2 = atoi("abc");
	printf("test_num2: %d\n", test_num2);	//无法解析, 返回值为0

	long test_num3;
	test_num3 = atol("1500000000");
	printf("test_num3: %d\n", test_num3);

	long test_num4;
	test_num4 = atol("abcd");
	printf("test_num4: %d\n", test_num4);	//无法解析, 返回值为0

	double test_num5;
	test_num5 = atof("123");
	printf("test_num5: %f\n", test_num5);

	double test_num6;
	test_num6 = atof("abcde");
	printf("test_num6: %f\n", test_num6);	//无法解析, 返回值为0

	return 0;
}