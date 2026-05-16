// 第5章 例题2
// 使用for循环，求1~100的累加和

#include <stdio.h>
int main()
{
	int sum=0;
	
	// 思考：如何在累加和超过2000时就停止？
	//  1-使用break；2-增加循环判断条件
	for(int i=1;i<=100;i++)	
	{
		sum+=i;
	}
	printf("sum is %d", sum);
	
	return 0;
}