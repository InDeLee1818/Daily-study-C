#pragma warning(disable:4996)
#include <stdio.h>



/*
//要求：打印“：”与“]”之间的内容
int main()
{
	char example1[20];
	//sscanf("[ti:easylove]", "%*[^:]%*c%[^]]", example1); 
	sscanf("[ti:easylove]", "%*[^:]:%[^]]", example1);

	printf("%s\n", example1);

	return 0;
}
*/


//使用sscanf读取"[02:06.85]"
//02（代表分钟），06（代表秒）到整型变量min与sec中
int main()
{
	int min, sec;
	//sscanf("[02:06.85]", "[%2d:%2d", &min, &sec);

	sscanf("[02:06.85]", "%*c%2d:%2d", &min, &sec);
	printf("%02d:%02d\n", min, sec);

	return 0;
}

