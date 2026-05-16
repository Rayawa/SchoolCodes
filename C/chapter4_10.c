// 第4章 例题10
// 输入年月日，判断是第几天
// 二月是28或29天，取决是否闰年；
// 思路1：用switch判断第几月，将之前都加起来；
// 思路2：利用case语句的跳过特性，实现月份天数的累加；

#include <stdio.h>
int main()
{
	int day, month, year, feb, num;
	year=2024, month=10,day=15;
	feb = 28;
	if((year%4==0 && year%100!=0)|| year%400==0)
		feb=29;
	num=day;
	switch (month)
    {
        case 12:num += 31;
        case 11:num += 30;
        case 10:num += 31;
        case 8 :num += 31;
        case 9 :num += 30;
        case 7 :num += 31;
        case 6 :num += 30;
        case 5 :num += 31;
        case 4 :num += 30;
        case 3 :num += feb;
        case 2 :num += 31;
        case 1 :;break;
        default: printf("wrong input.");return 0;
    }
	printf("%d.%d.%d is %d day.", year, month, day, num);
	
	return 0;
}