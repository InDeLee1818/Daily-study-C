#include <stdio.h>
#include <string.h>

//定义一个函数，把数字字符串转化成整型

my_atoi(const char* num)						//num指向"33018"中的第一个"3",num++指向下一个字符
{
	int tmp = 0;
	while (*num != '\0')						//num指向的字符需要进行遍历，使用while循环
	{
		tmp = tmp * 10 + (*num - '0');			//*num - '0': 计算ASCII的差值，3的ASCII减去0的ASCII等于整数3，1的ASCII减去0的ASCII等于整数1。
		num++;
	}
	return tmp;									//返回tmp的值
}

int main()
{
	int zip_code;
	zip_code = my_atoi("66138");
	printf("zip_code = %d\n", zip_code);

	return 0;
}