// 第5章例题9
// 求100~200之间所有的质数
// 质数的条件？和被3整除的题目，区别在哪里？
// 不能被2~sqrt(N)之间的自然数整除
// 考察点：嵌套循环
#include <stdio.h>
#include <math.h>
int main()
{	
	for(int num=100;num<=200;num++)
	{
		int root = sqrt(num);
		int factor;	// 因子factor
		for(factor=2;factor<=root;factor++)
		{
			if(num%factor==0)
				break;
		}
		if(factor > root)	//没有可以整除的因子
		{
			printf("%d\n", num);
		}
	}
	return 0;
}