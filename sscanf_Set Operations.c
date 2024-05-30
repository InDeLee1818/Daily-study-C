#pragma warning(disable:4996)
#include <stdio.h>



//sscanf: 集合操作 1 ----只支持获取字符串 (ASCII范围)
//1. 遇到不在范围的字符后停止获取
//2. 遇到空格后停止获取
/*
int main()
{
	char arr0[20];
	sscanf("abedcad352Louislou", "%[a-z]", arr0);
	printf("arr0 = %s\n", arr0);		//遇到不在a－z范围的字符后停止获取，即使后面还有符合的字符

	char arr1[20];
	sscanf("abed ad352Louislou", "%[a-z]", arr1);
	printf("arr1 = %s\n", arr1);		//遇到空格后停止获取

	char arr2[20];
	sscanf("abdewf345mnytUTadf", "%[a-f]", arr2);
	printf("arr2 = %s\n", arr2);		//abde, w超出a－f的范围，停止获取


	return 0;
}
*/

//sscanf: 集合操作 2----只支持获取字符串, 整型不可以 (列举出来的字符)
//%[aBc] 匹配a, B, c 中一员，贪婪性
/*
int main()
{
	char arr0[30];
	sscanf("ad0a5Ffk780ad9fFafjdk","%[a0d5F]", arr0);
	printf("arr0 = %s\n", arr0);			//ad0afF

	char arr1[30];
	sscanf("ad0 a5Ffk780ad9fFafjdk", "%[a0d5F]", arr1);
	printf("arr1 = %s\n", arr1);			//遇到空格后停止获取, ad0

	return 0;
}
*/

//sscanf: 集合操作 3 (一旦碰到列出的字符中的任意一个时，停止获取)
//%[^aFc] 匹配非aFc的任意字符，贪婪性
//碰到空格是可以获取空格

/*
int main()
{
	char arr0[10];
	sscanf("fdeo5609DtYfkadj", "%[^9Dj]", arr0);
	printf("arr0 = %s\n", arr0);			//fdeo560

	char arr1[10];
	sscanf("fdeo5 609DtYfkadj", "%[^9Dj]", arr1);
	printf("arr1 = %s\n", arr1);			//碰到空格是可以获取空格, "fdeo5 60"

	char arr2[10];
	sscanf("fdeo5 609DtYfkadj", "%[^9 D]",arr2);	//%[^9 D]有空格
	printf("arr2 = %s\n", arr2);			//"fdeo5"

	return 0;
}
*/

// sscanf: 集合操作 3
//%[^a-z] 表示读取除a－z以外的所有字符
//碰到空格是可以获取空格
//碰到字符范围之内后停止获取



int main()
{
	char arr0[20];
	sscanf("13TwyzRrjfkk", "%[^a-z]", arr0);
	printf("arr0 = %s\n", arr0);			//结果为：13T

	char arr1[20];
	sscanf("13 TwyzRrjfkk", "%[^a-z]", arr1);
	printf("arr1 = %s\n", arr1);			//结果为：13 T, 碰到空格是可以获取空格

	char arr2[20];
	sscanf("13TwyzRrjfkk", "%[^a-f]", arr2);
	printf("arr2 = %s\n", arr2);			//结果为：13TwyzRrj

	char arr3[20];
	sscanf("13TfwfyzRrjfkk", "%[^a-f]", arr3);
	printf("arr3 = %s\n", arr3);			//结果为：13T, 碰到字符f后停止获取
	return 0;
}