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
public class PosNegZero {
    public static void main(String args[])
    {
        int n;
        Scanner input=new Scanner(System.in);
        n=input.nextInt();
        if(n>0)
            System.out.print("Positive\n");
        else if(n==0)
            System.out.print("Zero\n");
        else
            System.out.print("Negative\n");
    }
}
