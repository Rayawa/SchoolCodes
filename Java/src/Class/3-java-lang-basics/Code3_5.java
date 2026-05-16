/**
 * PPT编号: 3-5
 * 来源: Slide 36 - 字符串引用类型
 * 说明: 演示String不可变性——连接操作创建新字符串，原对象不变
 */
public class Code3_5 {
    public static void main(String[] args) {
        String s1 = "abc";
        s1 = s1 + "def";   // 原"abc"不变, s1指向新字符串"abcdef"
        System.out.println(s1);
    }
}
