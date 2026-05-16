// 第3章 例题5
// 赋值运算符，赋值语句
#include <stdio.h>

int main()
{
	int a=3, b=4, c=9;
	//  1.复合赋值运算符
	a *= 2;
	b += c+2;
	c %= a;
	printf("a=%d, b=%d, c=%d\n", a, b, c);
	 
	// 2. 赋值和计算一体
	a=b=c=5;
	a=5+(b=6);
	a=(b=4)+(c=6);
	a=(b=3*4);
	printf("a=%d, b=%d, c=%d\n", a, b, c);
	 
	// 3.赋值优先级高于逗号
	a = (b=2, c=3, b+c);
	printf("a=%d, b=%d, c=%d\n", a, b, c);
	a = a+b, b=3;
	printf("a=%d, b=%d, c=%d\n", a, b, c);
	return 0;
}