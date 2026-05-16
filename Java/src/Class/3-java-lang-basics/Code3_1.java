/**
 * PPT编号: 3-1
 * 来源: Slide 3-4 - 程序结构示例
 * 说明: 演示Java程序的基本结构——主类创建Cal对象并调用其方法
 *       编译后每个类产生一个.class文件
 */
import java.util.* ;

public class Code3_1 {
    public static void main(String[] args) {
        Cal cal = new Cal(9, 3);
        System.out.println(" 9+3 = " + cal.add());
        System.out.println(" 9-3 = " + cal.sub());
        System.out.println(" 9*3 = " + cal.mul());
        System.out.println(" 9/3 = " + cal.div());
    }
}

class Cal {
    int x, y;
    Cal(int a, int b) {
        x = a;
        y = b;
    }
    int add() { return x + y; }
    int sub() { return x - y; }
    int mul() { return x * y; }
    int div() { return x / y; }
}
