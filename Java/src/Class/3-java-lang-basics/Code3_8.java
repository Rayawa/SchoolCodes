/**
 * PPT编号: 3-8
 * 来源: Slide 50 - switch语句示例
 * 说明: 根据输入的成绩等级字符输出对应分数范围
 */
import java.io.*;

class Code3_8 {
    public static void main(String[] args) {
        char ch;
        try {
            System.out.print("请输入成绩（字符）:");
            ch = (char) System.in.read();
            switch (ch) {
                case 'A':
                    System.out.println("85~100");
                    break;
                case 'B':
                    System.out.println("60~84");
                    break;
                case 'C':
                    System.out.println("0~59");
                    break;
                default:
                    System.out.println("输入有误");
            }
        } catch (IOException e) { }
    }
}
