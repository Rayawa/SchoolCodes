/**
 * PPT编号: 3-10
 * 来源: Slide 54 - do-while循环示例
 * 说明: 循环读取字符并输出其ASCII码，输入'#'结束
 */
import java.io.*;

public class Code3_10 {
    public static void main(String[] args) {
        char ch;
        try {
            System.out.println("请输入一个字符,以'#'结束");
            do {
                ch = (char) System.in.read();
                System.out.println("字符" + ch + "的ASCII码为" + (int) ch);
                System.in.skip(2);      // 跳过回车换行键
            } while (ch != '#');
        } catch (IOException e) {
            System.err.println(e.toString());
        }
    }
}
