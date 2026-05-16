// 第5章 例题1
// 求1~100的累加和，使用while和do while

#include <stdio.h>
int main()
{
	int sum=0, iter=1;
	
	while(iter<=100)
	{
		sum += iter++;		
	}
	printf("while-sum is %d\n",sum);
	
	sum=0, iter=1;
	do
	{
		sum += iter++;
	}while(iter<=100);
	printf("do-while-sum is %d\n",sum);

	// 思考：while 和 do while什么区别？
	// 将iter=200看看结果多少	
	
	return 0;
}