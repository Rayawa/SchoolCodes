/**
 * PPT编号: 3-9
 * 来源: Slide 52 - while循环示例
 * 说明: 求两个正整数的最小公倍数（LCM）
 */
public class Code3_9 {
    public static void main(String[] args) {
        int result;
        int m = Integer.parseInt(args[0]);
        int n = Integer.parseInt(args[1]);
        if (m > 0 && n > 0) {
            result = m < n ? n : m;
            while (result % m != 0 || result % n != 0) {
                result++;
            }
            System.out.println("最小公倍数为：" + result);
        } else {
            System.out.println("没有输入两个正整数");
        }
    }
}
