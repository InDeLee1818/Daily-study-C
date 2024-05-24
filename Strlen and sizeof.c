#include <stdio.h>
#include <string.h>

int main()
{
	char test_1[30] = "Louis how are you";
	char* test_2 = "Louis good evening";

	printf("test_1 = %d\n", sizeof(test_1)); //30
	printf("test_2 = %d\n", sizeof(test_2)); //8

	printf("test_1 = %d\n", strlen(test_1)); //17
	printf("test_2 = %d\n", strlen(test_2));//18

	return 0;
}



