//第4章例题5
//阶跃函数取值，使用嵌套if结构
// f(x)=1, x>0
// f(x)=0, x=0
// f(x)=-1, x<0

#include <stdio.h>
int main()
{
	int x, fx;
	scanf("%d",&x);
	if(x>0)
	{
		fx=1;
	}else	// 思考：如何改为不嵌套？
	{
		if(x<0)
			fx=-1;
		else
			fx=0;
	}
	printf("result is %d\n", fx);
	return 0;
}