/**
 * PPT编号: 3-6 (slide code snippets)
 * 来源: Slide 18 - 数据类型转换（自动与强制）
 * 说明: 演示自动类型转换与强制类型转换
 */
public class Code3_6c {
    public static void main(String[] args) {
        int a = 100;
        long b;
        char c;

        b = a;                // 自动转换: int -> long
        a = (int) b;          // 强制转换: long -> int
        c = (char) a;         // 强制转换: int -> char
        a = (int) c;          // 强制转换: char -> int

        // 布尔型不能与其他数据类型之间强制转换
        System.out.println("a=" + a + " c=" + c);
    }
}
