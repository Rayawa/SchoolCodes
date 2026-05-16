// 第4章 例题8
// 求解一元二次方程 ax^2+bx+c=0
// 利用判别式判断：同实根，异实根，复数根
#include <stdio.h>
#include <math.h>
const double eps = 1e-6;	// epsilon，微小实数
int main()
{
	double a=2, b=4, c=16;
	double disc, real, imag, root1, root2;
//	printf("input a, b,c:\n");
//	scanf("%lf,%lf,%lf", &a,&b,&c);
	if(a<eps)	//防止除零
	{
		printf("a can not be zero.\n");
		return 0;
	}
	disc = b*b-4*a*c;
	if(fabs(disc)<eps)		//判别式==0
	{
		root1= -b/(2*a);
		printf("two equal roots: %8.4f\n", root1);
	}else
	{
		if(disc>eps)  // 判别式>0
		{
			root1 = (-b+sqrt(disc))/(2*a);
			root2 = (-b-sqrt(disc))/(2*a);
			printf("diferent real roots:\n%.4f,%.4f\n", root1, root2);
		}else  // 判别式<0
		{
			real = -b/(2*a);
			imag = sqrt(-disc)/(2*a);
			printf("complex roots:\n");
			printf("%.4f ± %.4f", real,imag);
		}
	}
	return 0;
}