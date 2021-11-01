/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication2;

import java.util.Scanner;

/**
 *
 * @author Imtiaz
 */
public class palindrome {
    public static void main(String[] args) {
        String s1;
        Scanner input = new Scanner(System.in);
        s1=input.next();
        StringBuffer sb=new StringBuffer(s1);
        String s2=sb.reverse().toString();
        if(s1.equals(s2))
        {
            System.out.println("Palindrome");
        }
        else
            System.out.println("Not palindrome");
    }
    
}
