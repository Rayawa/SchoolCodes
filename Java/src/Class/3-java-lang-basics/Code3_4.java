/**
 * PPT编号: 3-4
 * 来源: Slide 31 - 二维数组示例
 * 说明: 演示二维数组的定义、赋值和遍历
 */
public class Code3_4 {
    public static void main(String[] args) {
        int[][] a = new int[3][4];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 4; j++) {
                a[i][j] = i * j;
            }
        }
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                System.out.print(a[i][j] + "  ");
            }
            System.out.println("");
        }
    }
}
