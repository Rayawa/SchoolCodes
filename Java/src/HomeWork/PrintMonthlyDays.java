import java.util.Scanner;

public class PrintMonthlyDays {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int month;

        // 循环直到输入有效的月份
        do {
            System.out.print("请输入月份 (1-12): ");
            month = scanner.nextInt();
        } while (month < 1 || month > 12);

        int days;

        // 使用switch语句确定天数
        switch (month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                days = 31;
                break;
            case 4: case 6: case 9: case 11:
                days = 30;
                break;
            case 2:
                days = 28; // 简化处理，假设非闰年
                break;
            default:
                days = 0; // 不会执行
        }

        System.out.println("月份 " + month + " 有 " + days + " 天。");

        scanner.close();
    }
}