/**
 * PPT编号: 3-6 (slide code snippets)
 * 来源: Slide 22-23 - intValue/doubleValue方法
 * 说明: intValue截断小数，doubleValue保留原值
 */
public class Code3_6d {
    public static void main(String[] args) {
        Double d = 17.9;
        int i = d.intValue();                // 17, 小数部分丢弃
        System.out.println("intValue: " + i);

        Integer n = 100;
        double v = n.doubleValue();          // 100.0
        System.out.println("doubleValue: " + v);
    }
}
