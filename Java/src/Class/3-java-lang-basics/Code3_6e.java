/**
 * PPT编号: 3-6 (slide code snippets)
 * 来源: Slide 24 - 类型转换: 利用类/对象方法
 * 说明: 包装类的静态方法与对象方法进行类型转换
 */
public class Code3_6e {
    public static void main(String[] args) {
        // 类方法（静态方法）
        int n1 = Integer.parseInt("23");
        String s1 = Integer.toString(23);
        double d1 = Double.parseDouble("12.3");
        String s2 = Double.toString(12.3);

        // 对象方法
        Double d = new Double(12.3);
        String s = d.toString();

        double val = Double.valueOf("12.3").doubleValue();

        System.out.println("parseInt: " + n1);
        System.out.println("parseDouble: " + d1);
        System.out.println("valueOf: " + val);
    }
}
