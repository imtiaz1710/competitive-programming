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
public class MathClassDemo {
    public static void main(String[] args) {
       Scanner input=new Scanner(System.in);
       double a,b;
        a = input.nextDouble();
        b = input.nextDouble();
        System.out.println("Max=" + (Math.max(a, b)));
        System.out.println("Min=" + Math.min(a, b));
        System.out.println("absolute value of a: " + Math.abs(a));
        System.out.println("absolute value of b: " + Math.abs(b));
        System.out.println("power a to the power b: " + Math.pow(a, b));
        System.out.println("round value of a " + Math.round(a));
        for (int i = 0; i < 100; i++) {
            System.out.println("PI= " + Math.PI);
        }
     
            
        }
 }
   