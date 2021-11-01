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
public class EvenOdd {
    public static void main(String args[])
    {
        int x;
        Scanner input=new Scanner(System.in);
        x=input.nextInt();
        if(x%2==0)
            System.out.println("Even");
        else
            System.out.println("Odd");
        
    }
}
