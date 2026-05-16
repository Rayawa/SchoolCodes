// 第4章 例题4
// 大写字母转换为小写

// A:65  a:97  相差32
// 1.逻辑运算: && || ！
// 2.逻辑运算和关系运算的区别
// 3.逻辑运算真值表

#include <stdio.h>
int main(){
	char ch;
	scanf("%c", &ch);
	
	if(ch>='A' && ch<='Z') // if(!(ch<'A') && !(ch>'Z'))
	{
		ch +=32;
	}
	// 思考：如何把&&更换为||？
	printf("%c\n",ch);
	return 0;
}
