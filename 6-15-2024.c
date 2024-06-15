#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

/*
//题目：有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

//程序分析：可填在百位、十位、个位的数字都是 1、2、3、4，组成所有的排列后再去掉不满足条件的排列。

int main()
{
	int x, y, z;
	for (x = 1; x <= 4; x++)
	{
		for (y = 1; y <= 4; y++)
		{
			for (z = 1; z <= 4; z++)
			{
				if (x != y && x != z && y != z)
				{
					printf("%d, %d, %d\n", x, y, z);
				}
			}
		}
	}




	return 0;
}
*/



/*
企业发放的奖金根据利润提成。

利润(I)低于或等于10万元时，奖金可提10%；
利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
20万到40万之间时，高于20万元的部分，可提成5%；
40万到60万之间时高于40万元的部分，可提成3%；
60万到100万之间时，高于60万元的部分，可提成1.5%；
高于100万元时，超过100万元的部分按1%提成。
从键盘输入当月利润I，求应发放奖金总数？

程序分析：请利用数轴来分界，定位。注意定义时需把奖金定义成双精度浮点(double)型。
*/


int main()
{
	double i;	//利润(I)
	double bonus10;
	double bonus20;
	double bonus40;
	double bonus60;
	double bonus100;
	double bonus100over;
	double total;

	printf("your net profit is: \n");
	scanf("%lf", &i);

	bonus10 = 100000 * 0.1;					//低于或等于10万元时，奖金可提10%；
	bonus20 = bonus10 + 100000 * 0.075;		//高于10万元，低于20万元
	bonus40 = bonus20 + 200000 * 0.005;		//20万到40万
	bonus60 = bonus40 + 200000 * 0.003;		//40万到60万
	bonus100 = bonus60 + 400000 * 0.015;	//60万到4100万

	if (i <= 100000)
	{
		total = i * 0.1;
	}
	
	else if (i <= 200000)
	{
		total = bonus10 + (i - 100000) * 0.075; 
	}

	else if (i <= 400000)
	{
		total = bonus20 + (i - 200000) * 0.05;
	}

	else if (i <= 600000)
	{
		total = bonus40 + (i - 400000) * 0.03;
	}

	else if (i <= 1000000)
	{
		total = bonus60 + (i - 600000) * 0.015;
	}

	else if (i > 1000000)
	{
		total = bonus100 + (i - 1000000) * 0.01;
	}
	
	printf("%lf", total);
	

	return 0;
}






