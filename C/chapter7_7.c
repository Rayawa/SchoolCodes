// 7.7 汉诺塔
// 1-移动盘子抽象为函数
// 2-移动的过程用printf打印出来

#include <stdio.h>
int line = 0;
void move(char src, char dst)
{
	printf("%6d:%c->%c\n",line++, src,dst);
}
void hanoi(int n,char a,char b,char c)
// a-起点，b-中转，c-终点
{
	if(n==1)
	{
		move(a,c);
	}
	else
	{
		hanoi(n-1,a,c,b); // n-1从a到b，c中转
		move(a,c);        // 第n个盘子从a到c
		hanoi(n-1,b,a,c); // n-1从b到c，a中转
	}
}
int main()
{
	int num;
	puts("input number of disks:");
	scanf("%d", &num);
	hanoi(num,'A','B','C');
	return 0;
}