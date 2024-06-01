#pragma warning(disable:4996)
#include <stdio.h>

//练习2:my_strcpy功能的实现
//char* my_strcpy(char* dest, const char* src)


char* my_strcpy(char* dest, const char* src)
{
	char* pointer1 = dest;											//保存目的数组的首地址,pointer1指向dest指向的字符串
	const char* pointer2 = src;										//pointer2指向src指向的字符串

	while (*pointer2 != '\0')										//为了实现此功能，需要有一个循环把src中的字符遍历一次
	{
		*pointer1 = *pointer2;										//2. 在遍历的过程中，把pointer2赋值给pointer1
		pointer1++;													//3. pointer1++,是为了下一次循环的时候给下一个字符赋值
		pointer2++;													//1. 只要*pointer2不等于'\0'，则pointer2往后指
		
	}
	*pointer1 = '\0';												//由于pointer2指向'\0'时退出了循环，并没有给此时的pointer1（dest指向的内存）赋值，没有赋值'\0'。						
	return dest;													//my_strcpy的返回值是目的字符串的首地址，dest没有改变过，所以返回dest。
}



int main()
{
	char store_space[30];
	my_strcpy(store_space, "Wrapper function: strcpy");				//调用自定义函数：my_strcpy,把字符串拷贝到store_space中去
	printf("store_space = %s\n", store_space);


	return 0;
}