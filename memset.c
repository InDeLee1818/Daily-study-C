#include <stdio.h>
#include <string.h>



/*
memset
空间设定函数

#include <string.h>
函数声明void* memest(void* ptr, int value, size_t num);

函数功能：
memset函数式将ptr指向的内存空间的num个字节全部赋值为value。

参数：
ptr: 指向任意类型的指针，即指向我们需要修改的内存。
value: 给ptr指向的内存空间赋的值。
num: 确定将ptr所指的内存中的num个字节全都用value代替。

返回值：
目的内存的首地址，即ptr的值
*/



/*
int main()
{
	char test[100] = "HahaHelloLouis";
	printf("test = %s\n", test);

	memset(test, 'a', 5); //把test所指向的内存的请5个字节全部改为'a'。
	printf("test = %s\n", test);

	memset(test, '\0', 100);
	printf("test = %s\n", test);	//此函数的主要用途为：当定义一个数组时，调用函数，将一个字符数组所有内容全部变成'\0'。初始化这块内存。


	return 0;
}
*/


/*
int main()
{
	char empty_list[100] = "onetwothreefourfivesixseveneightnineten";
	printf("empty_list = %s\n", empty_list);	//显示onetwothreefourfivesixseveneightnineten

	memset(empty_list, '\0', 100);				//把onetwothreefourfivesixseveneightnineten初始化
	printf("empty_list = %s\n", empty_list);

	memset(empty_list, 'c', 20);				//初始化之后的新内存，把前20个字节改为'c'，ixseveneightnineten则不再显示
	printf("empty_list = %s\n", empty_list);


	return 0;
}
*/

int main()
{
	char empty_list[100] = "onetwothreefourfivesixseveneightnineten";
	printf("empty_list = %s\n", empty_list);	//显示onetwothreefourfivesixseveneightnineten

	memset(empty_list, '\0', 20);
	printf("empty_list = %s\n", empty_list);	//把onetwothreefourfivesixseveneightnineten前20个字节初始化

	memset(empty_list, 'c', 20);
	printf("empty_list = %s\n", empty_list);	//初始化之后的新内存，把前20个字节改为'c'，ixseveneightnineten显示在c之后

	return 0;
}