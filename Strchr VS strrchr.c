#include <stdio.h>
#include <string.h>


/*
strchr
在字符指针test指向的字符串中，找ASCII码为s的字符。
注意，是首次匹配，如果说s指向的字符串中有多个ASCII为s的字符，则找到是第一个字符的返回值；

找到了返回找到的字符地址。
找不到则返回NULL。
*/

/*
int main()
{
	char* test = "MynameisLouisMynameisLouisMynameisLouis";
	char* prt;
	prt = strchr(test, 's'); //首次匹配
	if (prt == NULL) //找不到则返回NULL
	{
		printf("Sorry, we cannot find it");
		return 0;
	}
	printf("prt - test = %d", prt - test); //此处为指针的运算


	return 0;
}
*/

/*
strrchr
函数说明：末次匹配.
找到了返回找到的字符地址。
找不到则返回NULL。
*/


int main()
{
	char* a = "helloworldhelloworldhelloworld";
	char* prt;
	prt = strrchr(a, 'r'); //末次匹配
	if (prt == NULL)  //找不到则返回NULL
	{
		printf("Sorry, the system cannot find the recod");
		return 0;
	}
	printf("prt - a = %d", prt - a);  //此处为指针的运算

	return 0;
}






