#include <stdio.h>

/*
已知一个结构体，表示一个长度形
struct Rectangle
{
	int x;
	int y;
	int width;
	int height;
};
其中, (x,y) 为左上角坐标， width为宽度，height为高度
描述:
写一个函数

int rect_area(struct Rectangle* r)

用于求长度形的面积
*/

struct Rectangle
{
	int x;
	int y;
	int width;
	int height;
};

int rect_area(struct Rectangle* r)
{
	/*
	int R_area = r->height * r->width;
	return R_area;
	*/

	return r->height * r->width;
}

int main()
{
	struct Rectangle small_rec;
	small_rec.x = 0;
	small_rec.y = 0;
	small_rec.width = 10;
	small_rec.height = 300;

	int view_area = rect_area(&small_rec);
	printf("The area is: %d\n", view_area);
	
	return 0;
}