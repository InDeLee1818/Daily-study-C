#include <stdio.h>
#include <math.h>


/*
描述:
用 Point 表示一个点
struct Point
{
	int x;
	int y;
};

用Line 表示一条线段
struct Line
{
	struct Point start;
	struct Point end;
};

写一个函数
double line_length(struct Line* line)

求一个线段的长度。此线段起点（0, 10) ，终点(10, 0)
*/

struct Point
{
	int x;
	int y;
};

struct Line
{
	struct Point start;
	struct Point end;
};

double line_length(struct Line* line)
{
	int line_x = line->start.x - line->end.x;
	int line_y = line->start.y - line->end.y;

	return sqrt((double)line_x * line_x + (double)line_y * line_y);

}


int main()
{
	struct Line view;
	view.start.x = 0;
	view.end.x = 10;

	view.start.y = 10;
	view.end.y = 0;

	double display_value = line_length(&view);

	printf("the result is: %.2f\n", display_value);


	return 0;
}