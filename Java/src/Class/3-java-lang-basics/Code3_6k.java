/**
 * PPT编号: 3-6 (slide code snippets)
 * 来源: Slide 44 - 自增自减与三目运算符
 * 说明: 前置/后置自增的区别，及三目条件运算符
 */
public class Code3_6k {
    public static void main(String[] args) {
        // 后置++
        int a1 = 3, b1 = 5;
        int c1 = (a1++) * b1;           // a先运算再自增 => a=4, c=15
        System.out.println("a=" + a1 + ", c=" + c1);

        // 前置++
        int a2 = 3, b2 = 5;
        int c2 = (++a2) * b2;           // a先自增再运算 => a=4, c=20
        System.out.println("a=" + a2 + ", c=" + c2);

        // 三目条件运算符 ?:
        int x = 5, y = 8;
        int k = x > 3 ? y : 2;          // true => y
        System.out.println("k=" + k);    // 8
    }
}
