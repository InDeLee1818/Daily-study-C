#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define FEET 0.0833333




/*
编写一个程序，提示用户输入身高（单位：英寸）和姓名，然后以下面的格式显示用户刚输入的信息：
Dabney， you are 6.208 feet tall
*/



int main()
{
	char n_ame[20];
	//double inches;

	float inches;

	printf("Please enter your name.\n");
	scanf("%s", &n_ame);
	printf("Perfect, ");
	printf("now, please enter your heigh (inches)\n");
	
	scanf("%f", &inches);
	
	

	printf("%s, you are %f feet tall.\n",n_ame, inches * FEET);


	return 0;
}

