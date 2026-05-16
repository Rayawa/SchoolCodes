/**
 * PPT编号: 3-6 (slide code snippets)
 * 来源: Slide 39 - main方法的参数(命令行传参)
 * 说明: 通过main的String[] args接收命令行参数
 * 用法: java Code3_6i 10 20
 */
class Code3_6i {
    public static void main(String[] args) {
        int x = Integer.parseInt(args[0]);
        int y = Integer.parseInt(args[1]);
        System.out.println("x+y=" + (x + y));
    }
}
