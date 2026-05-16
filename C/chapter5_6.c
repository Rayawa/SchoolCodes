// 第5章例题6
// 求π的近似值
// π = 4*(1-1/3+1/5-1/7+1/9....)
// 规律：分母denominator是奇数，符号正负依次切换
// 停止条件？

#include <stdio.h>
const double eps=1e-6;

int main()
{
	double pai = 0;
	double denominator = 1.0, item=0;
	int sign=1;
	while((item=1/denominator)>eps)
	{
		pai += sign*item;
		denominator += 2;
		sign *= -1;
	}
	printf("\nresult is %.10f\n", 4*pai);
	return 0;
}