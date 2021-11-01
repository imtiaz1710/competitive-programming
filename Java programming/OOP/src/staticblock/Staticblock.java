/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package staticblock;

/**
 *
 * @author imtiaz
 */
public class Staticblock {
    static int i,j;
    static                  //static block
    {
        i=10;
        j=30;
        System.out.println("This is from static block"); 
        System.out.println(i);
        System.out.println(j);
    }
    public static void main(String[] args) {
        System.out.println("This is from main method");
        System.out.println(i);
        System.out.println(j);
    }
}
