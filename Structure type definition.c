



//结构体类型定义

/*
* 
1. 
(1)
先定义结构体类型，再去定义结构体变量

struct 结构体类型名
{
    成员列表
};

(2)
有了结构体类型后，就可以用类型定义变量了
struct stu   lucy, bob, lilei       //定义了三个struct stu类型的变量，每个变量都有三个成员，分别是num，name，sex

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Example 1:

struct stu
{
    int num;
    char name[20];
    char sex;
};
*/

/*
2. 
在定义结构体类型的时候顺便定义结构体变量，以后还可以定义结构体变量

struct 结构体类型名
{
    成员列表
}结构体变量1，结构体变量2;

struct 结构体类型名   变量3，变量4;

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Example 2:
struct stu
{
    int num;
    char name[20];
    char sex;
}lucy, bob, lilei;

struct stu xiaohong, xiaoming;

*/




/*
3.
在定义结构体类型的时候，没有结构体类型名，顺便定义结构体变量，因为没有类型名，所以以后不能定义相关类型的数据了。

struct
{
    成员列表;
}变量1，变量2;
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Example 3:

struct
{
    int num;
    char name[20];
    char sex;
}lucy, bob;

以后没法再定义这个结构体类型的数据了，因为没有类型名。

*/


/*
4.
最常用的方法

通常程序员将一个结构体类型重新起个类型名，用新的类型名替代原先的类型

步骤1：先用结构体类型定义变量
struct stu
{
    int num;
    char name[20];
    char sex;
}bob;

步骤2：新的类型名替代变量名
struct stu
{
    int num;
    char name[20];
    char sex;
}STU;

步骤3：在最前面加typedef
typedef struct stu
{
    int num;
    char name[20];
    char sex;
}STU;

**************注意：**************
步骤1和步骤2，在草稿上做的，步骤3是程序中我们想要的代码
以后STU就相当于struct stu
STU lucy; 和struct stu lucy; 是等价的。
*/




