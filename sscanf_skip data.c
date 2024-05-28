#pragma warning(disable:4996)
#include <stdio.h>


//sscanf: 跳过数据

int main()
{
	char arr1[20];
	sscanf("1234 5678", "%*d %s", arr1);	//*: 跳过数据
	printf("arr1 = %s\n", arr1);

	char arr2[20];
	sscanf("4321 9876", "%*s %s", arr2);	//*: 跳过数据
	printf("arr2 = %s\n", arr2);

	int arr3;
	sscanf("12345 56789", "%*s %d", &arr3);	//*: 跳过数据
	printf("arr3 = %d\n", arr3);

	char arr4[20];
	sscanf("1234 5678", "%s", arr4);		//结果为1234，4与5之间有空格，碰到空格之后停止获取数据
	printf("arr4 = %s\n", arr4);
	return 0;
}