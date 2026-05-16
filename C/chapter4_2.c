// 第4章 例题2
// 对3个实数升序排序

#include <stdio.h>
int main()
{
	double a,b,c,swap;
	a=10, b=-2;c=3;
	if(a>b)
	{
		swap=a;a=b;b=swap;
	}
	if(a>c)
	{
		swap=a;a=c;c=swap;
	}
	if(b>c)
	{
		swap=b;b=c;c=swap;
	}
	printf("%.2f,%.2f,%.2f\n",a,b,c);
	return 0;
}