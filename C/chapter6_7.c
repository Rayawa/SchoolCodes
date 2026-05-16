// 6.7 处理字符串的函数
// 学习常用的string处理函数

#include <stdio.h>
#include <string.h>
int main()
{
	// 1-puts 输出字符串
	char line[50]="I am a student.";
	char str[50];
	puts(line);
	// 2-gets 输入字符串；strcat 拼接字符串
//	puts("输入一行字符：");
//	gets(str);
//	strcat(line,str);
//	puts(line);
	// 3-strcpy, strncpy
	strcpy(line, "I love playing basketball.");	// strcpy(destination, source)
	printf("%s\n",line);
	//注意：dst的长度一定大于等于src
	strncpy(line,"1234567890",5);
	puts(line);
	// 4-strcmp
	strcpy(line,"computer");
	strcpy(str,"compare");
	int result = strcmp(line,str);
	printf("compare result=%d\n",result);
	// 5-strlen
	// 注意和sizeof的区别
	printf("strlen=%d,sizeof=%d\n", strlen(line),sizeof(line));
	
	return 0;
}