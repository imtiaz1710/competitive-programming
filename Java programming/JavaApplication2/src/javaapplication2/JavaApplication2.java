/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication2;

//string to primitive and primitive to string

import java.util.Scanner;

/**
 *
 * @author imtiaz
 */
public class JavaApplication2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x=input.nextInt();
        String s=Integer.toString(x);  //primitive data type to string;
        System.out.println(s);
        
        s=input.next();
        int i=Integer.parseInt(s); //or use Integer.valueOf(s); // string to primitive
        System.out.println(i);
        
        
    }
    
}
