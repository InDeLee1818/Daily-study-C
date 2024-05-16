#include <stdio.h>



//system function：在已经运行的程序中执行另外一个外部程序命令，如记事本，画图，计算器，测试网络等等
// notepad - 记事本
// mspaint - 画图
// calc - 计算器
// ping - 测试网络
// pause 


int main()
{
	system("notepad");

	system("mspaint");

	system("calc");

	return 0;
}