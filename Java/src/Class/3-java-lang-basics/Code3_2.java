/**
 * PPT编号: 3-2
 * 来源: Slide 19 - 数据类型转换
 * 说明: 演示int与char之间的强制类型转换
 */
import java.io.*;

public class Code3_2 {
    public static void main(String args[]) {
        int i = 65;
        char c = 'a', cc = '王';
        System.out.println(i);             // 65
        System.out.println((char) i);      // A
        System.out.println(c);             // a
        System.out.println((int) c);       // 97
        System.out.println(cc);            // 王
        System.out.println((int) cc);      // 29579
        System.out.println((char) 35328);  // 言
    }
}
