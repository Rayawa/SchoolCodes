// 6.6 字符串与字符数组
// 比较字符串与字符数组的用法
// 1-字符单引号''，字符串双引号""
// 2-字符串必须以0 或者'\0'为结束符
#include <stdio.h>
int main()
{
	char c[15]={'I',' ','a','m',' ','a',' ',
				's','t','u','d','e','n','t','.'};
	char str[] = "I am a student.";
	
	//1-用%c %x %d 试试
	printf("%s\n",c);
	printf("%s\n",str);
	
	//2-比较二者的长度
	printf("c length = %d\n",sizeof(c));
	printf("str length = %d\n",sizeof(str));
	
	
	return 0;
}