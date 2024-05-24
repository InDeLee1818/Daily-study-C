#include <stdio.h>
#include <string.h>
#pragma waring(disable:4996)



/*int strncmp(const char *str1, const char *str2, size_t n)*/

int main()
{
	char* test_1 = "Good morning Louis"; // 'm' is greater than 'e'
	char* test_2 = "Good evening Louis";

	int compare_result = strncmp(test_1, test_2, 6);

	if (compare_result > 0)
	{
		printf("test_1 is greater that test_2\n");
	}
	else if (compare_result < 0)
	{
		printf("test_1 is less than test_2\n");
	}
	else
	{
		printf("test_1 and test_2 are even\n");
	}

	return 0;
}