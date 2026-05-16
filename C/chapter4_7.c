// 第4章 例题7
// 判断输入是否闰年

#include <stdio.h>
int main()
{
	int year, result=0;
	printf("input year:\n");
	scanf("%d",&year);
	if(year%4 == 0)
	{
		if(year%100==0)
		{
			if(year%400==0)
				result = 1;
			else
				result = 0;
		}else
		{
			result = 1;
		}
	}else
	{
		result=0;
	}
	// 思考：更简洁的表达式？
	// if((year%4==0 && year%100!=0) || (year%400==0))
		
	if(result)
		printf("%d is a leap year.\n", year);
	else
		printf("%d is not a leap year.\n", year);
	return 0;
}