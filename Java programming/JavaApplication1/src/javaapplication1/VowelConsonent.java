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
public class VowelConsonent {
    public static void main(String[] args) {
        char c;
        Scanner input=new Scanner(System.in);
        c=input.next().charAt(0);
        if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
        {
            System.out.println("Vowel");
        }
        else
             System.out.println("Consonent");
    }
}
