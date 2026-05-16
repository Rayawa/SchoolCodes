// 7.12 变量的作用域
// 1. 大括号的作用
// 2. 观察同名变量，取哪个值？


#include <stdio.h>
char a='a', b='b';	// 全局变量

void output(int a, int b)
{
	printf("a=%d, b=%d\n", a, b);
}

int main()
{
	printf("a=%c, b=%c\n",a,b);	 // 全局变量
	if(a<b)
	{
		int a=10, b=15;// 局部变量
		output(a,b);	
	}
	{
		double a=1.2, b=3.3;// 局部变量
		printf("a=%.2f,b=%.2f\n",a,b);
	}
	return 0;
}
