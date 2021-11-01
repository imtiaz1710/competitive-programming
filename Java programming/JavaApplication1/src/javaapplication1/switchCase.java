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
public class switchCase {
    public static void main(String[] args) {
         int n;
         Scanner input=new Scanner(System.in);
         n=input.nextInt();
         switch(n)
         {
            case 1:
            System.out.println("One");
            break;
            case 2:
            System.out.println("Two");
            break;
            case 3:
            System.out.println("Three");
            break;
            case 4:
            System.out.println("Four");
            break;
            case 5:
            System.out.println("Five");
            break;
            case 6:
            System.out.println("Six");
            break;
            case 7:
            System.out.println("Seven");
            break;
            case 8:
            System.out.println("Eight");
            break;
            case 9:
            System.out.println("Nine");
            break;
            case 0:
            System.out.println("zero");
            break;
            default:
             System.out.println("Not a digit");   
         }
    }
}
