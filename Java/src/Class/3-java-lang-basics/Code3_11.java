/**
 * PPT编号: 3-11
 * 来源: Slide 56 - for循环示例
 * 说明: 计算 1² + 2² + 3² + ... + 100²
 */
public class Code3_11 {
    public static void main(String[] args) {
        int result = 0;
        for (int k = 1; k <= 100; k++)
            result += k * k;
        System.out.println("计算结果为：" + result);
    }
}
