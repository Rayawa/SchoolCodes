//第4章 例题1
// 对两个实数升序排序
// 学习关系运算符和表达式 > < >= <= !=
// 关系表达式的取值，0或1

#include <stdio.h>
int main()
{
	double a=5, b=2;
	double swap;
	printf("a>b:%d\n",a>b);
	if(a>b)	// 思考：a>b的值是多少？
	{
		swap=a;a=b;b=swap;	//思考：为何需要swap？
	}
	printf("%.2f,%.2f\n", a,b);
	printf("a>b:%d\n",a>b);
	return 0;
}