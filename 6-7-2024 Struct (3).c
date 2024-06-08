#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

typedef struct credit_card
{
	int card_num;
	char card_holder[20];
	float spend;
}CC;

void p_fun(CC* ptr, int count)
{
	int i;
	for (i = 0; i < count; i++)
	{
		printf("%d %s %f\n", ptr[i].card_num, ptr[i].card_holder, ptr[i].spend);
	}
}

int main()
{
	CC user[3] = {
		{4235, "Juan", 68.4f},
		{5861, "Tom", 77.5f},
		{1593, "John", 125.5f}
	};

	p_fun(user, 3);
	return 0;
}