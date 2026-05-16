/**
 * PPT编号: 3-6 (slide code snippets)
 * 来源: Slide 33-35 - 引用类型——字符串类
 * 说明: String对象的两种创建方式，==与equals的区别
 */
public class Code3_6h {
    public static void main(String[] args) {
        String s1 = new String("abc");
        String s2 = new String("abc");
        System.out.println("s1 == s2: " + (s1 == s2));          // false
        System.out.println("s1.equals(s2): " + s1.equals(s2));  // true

        String s3 = "abc";  // 字面量方式
        System.out.println("s3: " + s3);
    }
}
