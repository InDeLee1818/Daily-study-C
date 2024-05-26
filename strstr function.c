#include <stdio.h>
#include <string.h>




/*
strstr函数的功能：在字符串中找字符串。

char* strstr(const char* str1, const char* str2)

函数说明：
在str1指向的字符串中查找str2指向的字符串，也是首次匹配。

返回值：
找到：找到字符串的首地址
没找到：返回NULL
*/

/*
int main()
{
	char str1[50] = "abcd$#$abcd$#$abcd$#$";
	char str2[50] = "d$#$";

	char* pointer_1;
	pointer_1 = strstr(str1, str2);
	if (pointer_1 == NULL) //没找到：返回NULL
	{
		printf("Sorry, no record");
		return 0;
	}
	printf("%d", pointer_1 - str1);

	return 0;
}
*/

/*
int main()
{
	char student_list[100] = "OliviaEmmaCharlotteAmeliaLouis$#$MiaAvaLouisEvelyn";
	char find_list[100] = "$#$";
	char* ptr;
	ptr = strstr(student_list, find_list);
	if (ptr == NULL)
	{
		printf("No");
		return 0;
	}
	printf("%d", ptr - student_list);
	return 0;
}
*/


int main()
{
	char dog_breed[150] = "MaltesePekingeseHuskyMaltesePekingeseHuskyMaltesePekingeseHusky";
	char search[50] = "Husky";
	char* p;
	p = strstr(dog_breed, search);

	if (p == NULL)
	{
		printf("This dog breed has not been found\n");
		return 0;
	}
	printf("%d", p - dog_breed);

	return 0;
}

