package Class;

import java.io.IOException;

class CharInOut {
    public static void main(String[] args) {
        char c = ' ';
        System.out.println("Print in character");
        try {
            c = (char) System.in.read();
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
        System.out.println("You've printed in: " + c);
    }
}

class StringInOut {
    public static void main(String[] args) {
        String c = "";
        System.out.println("Print a string");
        java.io.BufferedReader br = new java.io.BufferedReader(new java.io.InputStreamReader(System.in));
        try {
            c = br.readLine();
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
        System.out.println("You've printed: " + c);
    }
}

public class InOut {
    public static void main(String[] args) {
        System.out.println("This is the InOut class");

        try {
            System.out.print("Enter a character: ");
            char ch = (char) System.in.read();
            System.in.skip(2);

            System.out.print("Enter a string: ");
            java.io.BufferedReader br = new java.io.BufferedReader(new java.io.InputStreamReader(System.in));
            String str = br.readLine();

            System.out.println("You entered character: " + ch);
            System.out.println("You entered string: " + str);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }
}