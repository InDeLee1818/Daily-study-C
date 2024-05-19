#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
描述:
用一个结构体 表示交通灯
struct TrafficLight
{
	int color; // 0, 表示红色， 1 表示黄 ， 2表示绿
};

写两个函数：
// 切到下一颜色
void change(struct TrafficLight* light)

// 显示当前颜色
void show(struct TrafficLight* light)
*/



struct TrafficLight
{
	int color;
};

void change(struct TrafficLight* light)
{
	printf("Switch to...\n");
	light->color = light->color + 1;
	if (light->color > 2)
	{
		light->color = 0;
	}
}

void show(struct TrafficLight* light)
{

	printf("Cuttent Light: ");
	if (light->color == 0)
	{
		printf("Red light\n");
	}
	else if (light->color == 1)
	{
		printf("Yellow light\n");
	}
	else
	{
		printf("Green light\n");
	}

}

int main()
{
	struct TrafficLight LED;
	LED.color = 0;

	

	change(&LED);
	show(&LED);

	change(&LED);
	show(&LED);

	change(&LED);
	show(&LED);

	return 0;
}
