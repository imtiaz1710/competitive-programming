
package javaapplication1;


import java.util.Scanner;
public class ArithmeticOperator {
    public static void main(String args[])
    {
        int result;
        int a,b;
        Scanner input=new Scanner(System.in);
        a=input.nextInt();
        b=input.nextInt();
        System.out.println("a+b="+(a+b));
        System.out.println("a-b="+(a-b));
        System.out.println("a*b="+(a*b));
        System.out.println("a/b="+(a/b));
        System.out.println("a%b="+(a%b));
    }
}
