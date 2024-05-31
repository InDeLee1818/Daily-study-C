#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>



//Type 1: const char* pointer0
//const char* pointer0：意思是pointer0指向的内存的内容不能通过pointer0来修改，用于保护pointer0指向的内存的内容。
//pointer0可以指向别的地方


//Type 1:
/*
int main()
{
	char arr0[20] = "Goodmorning";
	const char* pointer0 = arr0;			//const 用于保护指针指向的内存
	
	//*pointer0 = 'w';						//error. 不可以修改,不可以通过*pointer0去修改
	printf("arr0 = %s\n", arr0);

	pointer0 = "Goodnight";
	printf("pointer0 = %s\n", pointer0);	//pointer0可以指向别的地方

	return 0;
}
*/




//Type 2: char* const pointer1
//char* const pointer1： 意思是pointer1是只读的变量，pointer1不能指向别的地方，但是pointer1指向的内存的内容，是有可能可以修改的。


/*
int main()
{
	char arr1[20] = "helloworld";
	char* const pointer1 = arr1;
	printf("pointer1 = %s\n", pointer1);

	*pointer1 = 'c';							//helloworld >>> celloworld
	printf("pointer1(new) = %s\n", pointer1); 

	//pointer1 = "Goodnightworld";
	//printf("pointer1 = %s\n", pointer1);		//pointer1不能指向别的地方

	return 0;
}
*/


//Type 3: const char* const pointer3
//pointer3不能指向别的地方，指向的内存的内容也不能通过pointer3去修改

int main()
{
	char arr2[20] = "helloworld";
	const char* const pointer3 = arr2;
	printf("pointer3 = %s\n", pointer3);

	//*pointer3 = 'c';							//error, 不可以修改,不可以通过*pointer3去修改
	//pointer3 = "goodnightworld"				//pointer3不能指向别的地方

	return 0;
}
