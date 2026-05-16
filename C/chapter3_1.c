// 第3章 例题1
// 将摄氏温度，转换为华氏温度

#include <stdio.h>

int main()
{
	double f,c;  // Fahrenheit:华氏温度  celsius:摄氏温度
	f=64;
	c=(5/9)*(f-32);
	printf("f=%f\nc=%f\n", f,c);
	
	return 0;
}