/**
 * PPT编号: 3-6 (slide code snippets)
 * 来源: Slide 27-28 - 引用类型——类
 * 说明: 自定义MyDate类，区分基本类型与引用类型的声明方式
 */
class MyDate {
    int day;
    int month;
    int year;
}

public class Code3_6f {
    public static void main(String[] args) {
        int i, j, k;                            // 基本类型——直接分配内存
        MyDate d1 = new MyDate();               // 引用类型——new分配空间
        d1.day = 8;
        d1.month = 8;
        d1.year = 2008;
        System.out.println(d1.year + "-" + d1.month + "-" + d1.day);
    }
}
