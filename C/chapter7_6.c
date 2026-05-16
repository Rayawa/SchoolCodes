// 7.6 递归函数求阶乘n!
// 1-递进关系，n*function(n-1)
// 2-终止条件，n=1
// 3-对输入范围进行判断1~10(整数容易超出范围)

// 练习：使用double作为返回值

#include <stdio.h>
int factorials(int n)
{
	if(n==1)		//终止条件
		return 1;
	else
		return n*factorials(n-1); // 递进
}
int main()
{
	int n;
	puts("input n(1~10):");
	scanf("%d", &n);
	if(n>10||n<1)
	{
		puts("wrong input.");
		return 0;
	}
	printf("%d! = %d", n, factorials(n));
	return 0;
}