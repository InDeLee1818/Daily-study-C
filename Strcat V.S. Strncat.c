#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>




/*
//strcat
//不接返回值,则不用定义指针

int main()
{
	char c[30] = "aaaa\0aaaaaaaaaaaaa";
	strcat(c, "bbbb");
	printf("%s", c);

	return 0;
}
*/


/*
int main()
{
	char c[30] = "aaaaaa\0aaaaaaa";
	strcat(c, "bbbb");
	printf("%s", c + 8); //aaaaaa\0a > display 'bb'


	return 0;
}
*/




/*
//strncat

int main()
{

	char c[30] = "aaaaa\0aaaaaaaaaaaaaa";
	char* prt = "bbbbb";

	strncat(c, prt, 5);
	printf("%s\n\n\n", c);

	printf("%s", c + 8); //aaaaa\0aa > aaaaabbb > display 'bb'


	return 0;
}
*/




