// 第5章例题7
// 斐波那契(Fibonacci)数列
// 规律：1，1开始，后面每个数是前两个数之和
// 思考：循环从何时开始？终止条件？如何传递数值？

#include <stdio.h>
int main()
{
	unsigned int f1,f2,f3,counter;
	f1=1,f2=1;
	printf("Fibonacci is :\n");
	printf("%d\n%d\n", f1,f2);
	for(counter=3;counter<=40;counter++)
	{
		f3=f1+f2;
		printf("%d\n", f3);
		f1=f2, f2=f3;
	}
	return 0;
}