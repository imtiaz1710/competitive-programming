package javaapplication1;
import java.util.Scanner;

public class AreaofCircle {
    private static Scanner input;

	public static void main(String args[])
    {   
        double area;
        double r;
        input = new Scanner(System.in);

        System.out.println("Please Input the radius of the Circle: ");
        r=input.nextDouble();
       
        area=3.1416*r*r;
        for(int i = 0;i<5;i++)System.out.println("Area="+area);

    }
}