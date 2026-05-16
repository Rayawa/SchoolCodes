// 例题6.1 
// 对10个数组元素依次赋值为0,1,2,3,4,5,6,7,8,9，要求按逆序输出。
// 1) 正序赋值   2) 逆序输出
// 学习：如何定义数组，如何引用数组元素

#include <stdio.h>
const int NUM=10;
int main()
{
	int array[NUM];
	for(int i=0;i<NUM;i++)	// 正序赋值
	{
		array[i] = i;
	}
	for(int i=NUM-1;i>=0;i--) // 逆序输出
	{
		printf("%d,", array[i]);
	}
	printf("\n");
	return 0;
}