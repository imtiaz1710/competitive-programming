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
public class Scan {
    public static void main(String[] args) {
       Scanner input=new Scanner(System.in);
       String str;
       double d;
       int i;
       str=input.nextLine();
       d=input.nextDouble();
       i=input.nextInt();
       System.out.println(str+d+ " "+i);
       }
}
