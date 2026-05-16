// 第3章 例题6
// printf和scanf的使用
#define printf __mingw_printf
#include <stdio.h>

int main()
{
	int ns = 0x16ABC;
	unsigned long nul = 12345678L;
	printf("%20d, %20X\n", ns);		//10进制（补零）和16进制
	printf("%20d, %020o\n", nul);   //10进制和8进制（补零）
	
	float x=1/3.0L;
	double x0 = 1/3.0L;
	long double x1 = 1/3.0L;
	printf("%20.10f, %20.18e\n", x, x0);  //浮点数和科学计数
	printf("%.20f, %.20Lf\n", x0, x1);  //双精度、长双精度
		
	int a,b;
	scanf("%c,%o",&a,&b);
	printf("a=%d,b=%d\n",a,b);
	
//	float y;
//	scanf("%lf,%f", &x0, &y);	// 观察输入时lf和f的区别
//	printf("%f,%f\n", x0, y);
	
	return 0;
}