#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

/*
//using function goto()

int main()
{
	char letter;
	printf("To display upcase letter, please enter 'u' or 'U', else, enter 'l' or 'L'\n");

	first:
	letter = getchar();

	if (letter == 'U' || letter == 'u')
	{
		for (letter = 'A'; letter <= 'Z'; letter++)
		{
			printf("%c\n", letter);
		}
	}

	else if (letter == 'L' || letter == 'l')
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			printf("%c\n", letter);
		}
	}

	else
	{
		printf("pleas try again\n");
		getchar();
		goto first;
	}
	return 0;
}

*/

/*
int main()
{
	char l_letter;
	char u_letter;
	point:

	l_letter = getchar();
	u_letter = l_letter - 32;

	printf("%c\n", u_letter);
	getchar();

	goto point;
	return 0;
}
*/

/*
int main()
{
	char letter;

	first:
	scanf("%c", &letter);
	printf("%c\n", letter - 32);
	getchar();


	goto first;
	return 0;
}
*/

int main()
{
	char letter;
	int control;
	for (control = 0; control < 20; control++)
	{
		scanf("%c", &letter);
		printf("%c\n", letter - 32);

		getchar();
	}
	
	return 0;
}
