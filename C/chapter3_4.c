// 第3章 例题4
// 混合计算：优先级、类型转换

#include <stdio.h>

int main()
{
	int i=3;
	float f=2.5;
	double d=7.5;	
	
	printf("=============\n");	//计算表达式的值
	printf("%f\n", i/2*d);
	printf("%f\n", f*'a'/3);	// 'a'=97
	printf("%f\n", f*++i/3);
	printf("=============\n");	//结果是否相等？
	printf("%f\n", f*'a'/3);
	printf("%f\n", f*'a'/3.0);
	printf("=============\n");  // 口算，验证结果
	printf("%f\n", 'a'/3*f+i++/2*d);
	return 0;
}