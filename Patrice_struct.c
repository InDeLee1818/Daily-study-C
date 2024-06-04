#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)


struct born
{
	int year;
	int month;
	int day;
};

struct people
{
	int age;
	char name[20];
	char sex;
	char* address;
	struct born date;
};

int main()
{
	struct people Leilei;
	Leilei.age = 20;
	strcpy(Leilei.name, "Leilei");
	Leilei.address = "Newyork";
	printf("How old: %d\n", Leilei.age);
	printf("What is your name: %s\n", Leilei.name);
	printf("Where is your address: %s\n", Leilei.address);

	Leilei.date.year = 2022;
	Leilei.date.month = 12;
	Leilei.date.day = 25;
	
	printf("What is your birthday?\n");
	printf("%d %d %d\n", Leilei.date.year, Leilei.date.month, Leilei.date.day);

	return 0;
}