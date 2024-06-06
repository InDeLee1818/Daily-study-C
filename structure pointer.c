#include <stdio.h>
#pragma warning (disable:4996)

/*
struct stu
{
	int num;
	char name[20];
};



int main()
{
	struct stu boy = { 101, "lilei" };			//结构体类型必须相同
	struct stu* p;								//结构体类型必须相同
	p = &boy;									//通过结构体指针，保存结构体变量的地址 (&为取地址符，把boy的地址赋值给了p)

	printf("sizeof = %d\n", sizeof(p));			
	printf("boy.num = %d\n", boy.num);			//方式一
	printf("(*p).num = %d\n", (*p).num);		//方式二: p指向boy，*p等价于boy
	printf("p->num = %d\n", p->num);			//方式三

	return 0;
}
*/


struct product_info
{
	int price;
	int date_year;
};



int main()
{
	struct product_info milk = { 3, 2024 };
	struct product_info* beef;
	beef = &milk;												//通过结构体指针，保存结构体变量的地址 (&为取地址符，把milk的地址赋值给了beef)

	printf("milk.date_year = %d\n", milk.date_year);			//方式一
	printf("milk.price = %d\n", milk.price);

	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	printf("(*beef).date_year = %d\n", (*beef).date_year);		//方式二
	printf("(*beef).price = %d\n", (*beef).price);

	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	printf("beef->date_year = %d\n", beef->date_year);			//方式三
	printf("beef->price = %d\n", beef->price);

	return 0;
}