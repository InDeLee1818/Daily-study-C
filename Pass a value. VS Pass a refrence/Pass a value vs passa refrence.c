#include <stdio.h>

//Pass a value
//Example 1

/*
void increase(int a) // ** 变量名相同，但是地址不同
{
	a += 1; //改变它的值，不会影响int main的变量a的值
}

int main()
{
	int a = 10; // ** 变量名相同，但是地址不同

	increase(a);

	printf("The value of a: %d\n", a);

	return 0;
}
*/


//Example 2
/*
struct Circle
{
	int x;
	int y;
	int radius;
};

void move_to(struct Circle c, int x, int y) // ** 变量名相同，但是地址不同
{
	c.x = x; //12
	c.y = y; //12
}

int main()
{

	struct Circle c; // ** 变量名相同，但是地址不同
	c.x = 0; //0
	c.y = 0; //0
	c.radius = 1;

	move_to(c, 12, 12); //改变move_to里面的值，使其变成12，12。而不会影响int main里面的值

	return 0;
}*/



//Pass a refrence
//通过指针操作，可以修改目标变量的值

//Example 1
/*
void increase(int* pa) //int main里变量a的地址传入这里，指针pa指向变量a
{
	*pa += 1; //*pa就是对pa的目标进行操作(即变量a),这里修改的其实是int main里面变量a的值
}

int main()
{
	int a = 10;

	increase(&a);

	printf("The value is: %d\n", a);
	return 0;
}
*/


/*
//Example 2

struct Circle
{
	int x;
	int y;
	int radius;
};

void move_to(struct Circle* pc, int x, int y) //1. 首先，参数设置为指针类型
//指针pc指向int main里的变量c
{
	pc->x = x; //通过指针操作，可以修改目标变量的值
	pc->y = y; //通过指针操作，可以修改目标变量的值
}


int main()
{

	struct Circle c;
	c.x = 0;
	c.y = 0;
	c.radius = 1;

	move_to(&c, 12, 12); //定义了一个结构体circle，调用move_to，想修改int main()circle的值
	// 2.调用move_to,把int main的c的地址传入这里 (&c)

	return 0;
}
*/

