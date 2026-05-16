// 7.14 静态局部变量
// 学习 static的用法
// 思考：和全局变量的区别在哪里？
#include <stdio.h>
int acc(int);
int main()
{
	int a=5,b=4,c=3;
	printf("+a=%d\n", acc(a));
	printf("+b=%d\n", acc(b));
	printf("+c=%d\n", acc(c));
	
	return 0;
}

int acc(int x)
{
	static int sum;	// 静态局部变量，默认初始化为0
	sum+= x;
	return sum;
}