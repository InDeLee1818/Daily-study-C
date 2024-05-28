#pragma warning(disable:4996)
#include <stdio.h>



/*
//sprintf 格式化字符串操作函数
int main()
{
	char arr1[100];
	sprintf(arr1, "%d/%d/%d", 2024, 5, 28);
	printf("arr1 = %s\n", arr1);

	return 0;
}
*/


//sscanf 格式化字符串操作函数
int main()
{
	int a, b, c;
	sscanf("2024/5/28", "%d/%d/%d", &a, &b, &c);
	printf("%d %d %d", a, b, c);


	return 0;
}