#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



/*
int main()
{
	char greeting[100] = "What's up, \0long time no see";
	strcat(greeting, "Louis");

	printf("%s", greeting);

	return 0;
}
*/


/*
int main()
{
	char test[50];
	char test02[100] = "What's up, \0long time no see.";
	printf("please enter your greeting.\n");
	scanf("%s", &test);
	printf("%s ", test);
	strcat(test02, "Louis");

	printf("%s", test02);

	return 0;
	
}
*/



int main()
{
	char happy_sad[30] = "such a \0sad day";
	strcat(happy_sad, "happy day");

	printf("%s", happy_sad);


	return 0;
}