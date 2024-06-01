#pragma warning(disable:4996)
#include <stdio.h>

//练习1：实现strlen函数功能
//unsigned int my_strlen(const char* s)
//两个指针相减



unsigned int my_strlen(const char* s)
{
	const char* pointer1 = s;					//pointer1指向s
	while (*pointer1 != '\0')					//只有pointer1指向的元素不等于0，则pointer1则往后指，直到遇到\0，跳出循环
	{
		pointer1++;

	}
	return pointer1 - s;						//s指向的是hellolouisli中的h，而pointer1通过循环，指向的是hellolouisli中的i，pointer1 － s可获得字符串长度。

}




int main()
{
	int num;
	num = my_strlen("hellolouisli");			//调用my_strlen，把hellolouisli传给s，即s指向hellolouisli
	printf("num = %d\n", num);

	return 0;
}
