/**
 * PPT编号: 3-7
 * 来源: Slide 46 - if-else条件语句基本形式
 * 说明: 从键盘输入一个字符并判断是否为数字字符
 */
import java.io.*;

class Code3_7 {
    public static void main(String[] args) {
        int ch;
        try {
            System.out.print("请输入一个字符:");
            ch = (char) System.in.read();
            if (ch >= '0' && ch <= '9')
                System.out.println("你输入了一个数字字符");
            else
                System.out.println("你输入了一个非数字字符");
        } catch (IOException e) { }
    }
}
