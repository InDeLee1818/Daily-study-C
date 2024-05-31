#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>


int main()
{
	char arr0[20];
	
	char arr1[20];
	//%[^#] = 获取除#号外的所有字符
	//%*[^#] = 跳过获取除#号外的所有字符
	//%*# = 跳过获取#号
	//%[^@] = 获取除@号外的所有字符
	

	sscanf("afj13#fjkads@jf53T", "%*[^#]#%[^@]", arr0);		//获取#与@之间的字符。fjkads
	sscanf("afj13#fjkads@jf53T", "%*[^#]%*c%[^@]", arr1);	//%*c代替#，其结果一样。fjkads
	
	printf("arr0 = %s\n", arr0);
	printf("arr1 = %s\n", arr1);


	return 0;
}




