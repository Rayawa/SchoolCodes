/**
 * PPT编号: 3-6 (slide code snippets)
 * 来源: Slide 41 - StringBuffer可变字符串
 * 说明: String与StringBuffer的区别
 */
public class Code3_6n {
    public static void main(String[] args) {
        // String不可变
        String s = "hello";
        s = s + " world";

        // StringBuffer可变
        StringBuffer sb = new StringBuffer("hello");
        sb.setCharAt(0, 'H');              // 直接修改
        System.out.println(sb.toString()); // Hello

        StringBuffer sb2 = new StringBuffer(50);      // 容量构造
        StringBuffer sb3 = new StringBuffer("Java");  // 初始值
        System.out.println(sb3.toString());
    }
}
