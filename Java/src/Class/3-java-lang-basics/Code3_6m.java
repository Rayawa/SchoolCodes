/**
 * PPT编号: 3-6 (slide code snippets)
 * 来源: Slide 57-58 - break带标号/不带标号
 * 说明: 普通break只跳出内层循环，带标号break跳出外层循环
 */
public class Code3_6m {
    public static void main(String[] args) {
        System.out.println("=== break无标号: 跳出内层 ===");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (j == 1) break;
                System.out.println("i=" + i + ", j=" + j);
            }
        }

        System.out.println("=== break带标号: 跳出外层 ===");
        outer:
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (j == 1) break outer;
                System.out.println("i=" + i + ", j=" + j);
            }
        }
    }
}
