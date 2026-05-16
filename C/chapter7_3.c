// 7.3 函数嵌套
// 使用嵌套函数求4个整数最大值
// 函数嵌套：调用函数时，实参为函数的返回值
// 注意：函数的返回值为右值

#include <stdio.h>
int max(int x,int y)
{
	return x>y?x:y;
}
int main()
{
	int a=33,b=25,c=51,d=11;
	int mx;
	mx=max(a,max(b,max(c,d)));
	printf("max=%d",mx);
	return 0;
}