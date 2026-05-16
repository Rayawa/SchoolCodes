// 7.2 用函数判断2个整数的最大值
// 学习定义函数
// 1.先声明，后使用。
// 2.声明和定义的区别？
// 比较：声明、定义可以放在哪些位置？main前、后、中

#include <stdio.h>
int max(int,int);
int main()
{
	int a,b;
	puts("Input 2 integers:");
	scanf("%d %d", &a,&b);
	printf("a=%d,b=%d,max=%d",a,b,max(a,b));
	return 0;
}

int max(int x,int y)
{
	return x>y?x:y;
}