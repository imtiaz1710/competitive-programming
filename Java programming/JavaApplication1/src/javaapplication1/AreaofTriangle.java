/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication1;
import java.util.Scanner;
/**
 *
 * @author Imtiaz
 */
public class AreaofTriangle {
    public static void main(String args[])
    {   
        double area;
        double a,b;
        Scanner input=new Scanner(System.in);

        System.out.println("Please Input base and height:");
        a=input.nextDouble();
        b=input.nextDouble();
        area=.5*a*b;
        System.out.println("Area="+area);

    }
}
