// 第3章 例题3
// 自增自减计算

#include <stdio.h>

int main()
{
	int x,i=5;
	x = ++i;
	printf("1: x=%d, i=%d\n", x,i);
	x = i++;
	printf("2: x=%d, i=%d\n", x,i);
	x = --i;
	printf("3: x=%d, i=%d\n", x,i);
	x = i--;
	printf("4: x=%d, i=%d\n", x,i);
	
	// x = ++i--;

	return 0;
}