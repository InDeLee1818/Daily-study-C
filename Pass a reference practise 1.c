#include <stdio.h>
#include <stdbool.h>
#include <string.h>


/*

Note
结构体pointer:
stuct Student s;
struct Student* ptrs = &s;

First access method:
(*ptrs).id = 20180001;

Second access method:
ptrs->id = 20180001;

*/



/*
已知结构体
struct Student
{
	int id;  // 学号
	char name[32]; // 姓名
	bool sex; // 性别
};

表示一个学生的信息。

现在，请写一个函数，用于对Student 对象设值
void st_set(struct Student* st, int id, char* name, bool sex)
{
}
*/

struct Student
{
	int id;
	char name[32];
	bool sex;
};

void st_set(struct Student* st, int id, char* name, bool sex)
{
	st->id = id;
	strcpy_s(st->name, 32, name);
	st->sex = sex;

}

int main()
{
	struct Student one; //初始化一个名为one的结构体

	st_set(&one, 3001303388, "Louis", true); //调用函数，struct Student* st为指针，取one的地址传入自定义函数中

	return 0;
}
