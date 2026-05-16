// 第5章 例题4
// 使用continue和break控制循环
// 输出100~200之间能被3整除的数

#include <stdio.h>
int main()
{
	int num;
	//思考：是否可以去掉continue，不影响运行结果？
	for(num=100;num<=200;num++)
	{
		if(num%3==0)
		{
			continue;
		}
		printf("%d,", num);
	} 
	return 0;           
}