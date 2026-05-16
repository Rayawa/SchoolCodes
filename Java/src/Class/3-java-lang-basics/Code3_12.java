/**
 * PPT编号: 3-12
 * 来源: Slide 59 - continue语句示例（带标号）
 * 说明: 求2~100中的素数，每行打印5个数字
 */
import java.io.*;

public class Code3_12 {
    public static void main(String[] args) {
        outer_loop:
        for (int i = 2, k = 0; i < 100; i++) {
            for (int j = 2; j <= Math.sqrt(i); j++) {
                if (i % j == 0)
                    continue outer_loop;
            }
            System.out.print(i + "\t");
            k++;
            if (k % 5 == 0)
                System.out.println();
        }
    }
}
