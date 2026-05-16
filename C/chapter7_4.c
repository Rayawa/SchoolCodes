// 7.4 递归函数求2的n次幂
// 1-递归函数：嵌套函数调用自己
// 2-递-递进；归-回归；
// 3-重点==终止条件;
// 4- 幂为负数时，如何修改？

// 练习：编写幂函数，可以计算任意实数的整数次幂

#include <stdio.h>
double power2(double n)
{
	if(n==0)	// 终止条件：回归的起点
		return 1;
	else if(n>0)
		return 2.0*power2(n-1);  // 正幂
	else
		return power2(n+1)/2.0;  // 负幂
}
int main()
{
	int p;
	puts("Input power:");
	scanf("%d",&p);
	printf("2^%d = %f", p, power2(p));
	return 0;
}