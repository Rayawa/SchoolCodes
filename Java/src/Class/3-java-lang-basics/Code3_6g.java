/**
 * PPT编号: 3-6 (slide code snippets)
 * 来源: Slide 29-30 - 引用类型——数组
 * 说明: 一维数组、二维数组、对象数组的定义与初始化
 */
public class Code3_6g {
    public static void main(String[] args) {
        // 一维数组：先定义再分配
        int[] intArray1 = new int[5];
        // 一维数组：定义兼赋初值
        int[] intArray2 = {11, 47, 93, 26, 38};

        // 二维数组
        int[][] intArray = new int[3][4];

        // 对象数组
        Integer[] b = new Integer[5];
        for (int i = 0; i < b.length; i++)
            b[i] = new Integer(i * 10);

        // 字符串对象数组
        String[] names = {"wang", "zhang", "Li zhi"};

        for (String name : names) System.out.println(name);
    }
}
