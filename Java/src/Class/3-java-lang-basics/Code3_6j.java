/**
 * PPT编号: 3-6 (slide code snippets)
 * 来源: Slide 40 - 字符串连接与类型转换
 * 说明: "+"号在字符串连接时的类型转换规则
 */
public class Code3_6j {
    public static void main(String[] args) {
        boolean b = true;
        float f = 3.1415925F;

        System.out.println("布尔变量b=" + b);
        System.out.println("浮点型变量f=" + f);

        System.out.println("===" + 100 + 200 + "===");        // ===100200===
        System.out.println("===" + (100 + 200) + "===");      // ===300===
        System.out.println("===" + 100 + 200);                 // ===100200
        System.out.println(100 + 200 + "===");                 // 300===
    }
}
