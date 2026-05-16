// 第3章 例题2
// 1. 常量的前缀后缀
// 2. 取值范围，值溢出
// 3. 浮点数的精度

#include <stdio.h>

#define printf __mingw_printf
int main()
{
    int bin = 0b10010101;   // 二进制常量
    int oct = 0345;         // 八进制常量
    int hex = 0x16FA;       // 16进制常量
    printf("bin=%d,oct=%d,hex=%d\n", bin, oct, hex);  // 2、8、16进制

    short snum= 65535;			//取值范围溢出
    int num = 123451234512345L;		// 溢出
    long long  lnum = 123451234512345L;    // 长整数
    printf("short=%d\nint=%d\nlong long=%lld\n", snum, num, lnum);  // int和long long

    float short_f = 1.0/3.0L;
    double double_f = 1.0/3.0L;
    long double long_f = 1.0/3.0L;
    printf("%.20f\n%.20f\n%.20Lf\n", short_f, double_f, long_f);
	
	return 0;
}