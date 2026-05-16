package Class;
import java.util.Scanner;
public class math {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int x = input.nextInt(), y = input.nextInt();
        calculate cal = new calculate(x, y);
        System.out.println(x + "+" + y + "=" + cal.add());
        System.out.println(x + "-" + y + "=" + cal.minus());
        System.out.println(x + "*" + y + "=" + cal.times());
        System.out.println(x + "/" + y + "=" + cal.divide());

    }
}
class calculate{
    int x, y;
    calculate(int a, int b){
        x = a;
        y = b;
    }
    double add(){
        return x+y;
    }
    double minus(){
        return x-y;
    }
    double times(){
        return x*y;
    }
    double divide(){
        return (double) x/y;
    }
}