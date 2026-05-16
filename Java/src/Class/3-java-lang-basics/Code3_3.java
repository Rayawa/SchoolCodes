/**
 * PPT编号: 3-3
 * 来源: Slide 25-26 - Integer包装类示例
 * 说明: 演示Integer包装类的构造方法、常用方法和静态方法
 */
public class Code3_3 {
    public static void main(String[] args) {
        Integer i = new Integer(256);
        Integer j = new Integer("256");

        System.out.println(i.intValue() * 2);
        System.out.println(i.doubleValue());
        System.out.println("i= " + i.toString());
        System.out.println(i == j);              // false, 对象引用不同
        System.out.println(i.compareTo(j));      // 0, 值相等

        System.out.println(Integer.parseInt("100") * 2);
        System.out.println("100*2= " + Integer.toString(100 * 2));

        int k;
        k = Integer.valueOf("1010", 2).intValue();  // 二进制"1010" -> 10
        System.out.println(k);

        System.out.println(Integer.MAX_VALUE);
        System.out.println(Integer.MIN_VALUE);
    }
}
