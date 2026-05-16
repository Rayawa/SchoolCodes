// 第4章 例题6
// 使用switch语句输出分数段
// 掌握switch语句的使用
// 关键字：switch, case, default, break

#include <stdio.h>
int main()
{
	char input;
	printf("input A~D\n");
	scanf("%c", &input);
	
	switch(input)
		{
		case 'A':
			printf("score >85.\n");break;
		case 'B':
			printf("score 70~84.\n");break;
		case 'C':
			printf("score 60~69.\n");break;
		case 'D':
			printf("score <60.\n");break;
		default:
			printf("wrong input!\n");
		}
	// 思考：1.如何加上小写字母？
	//       2.如何用if语句实现？
			
	return 0;
}