/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication2;

/**
 *
 * @author Imtiaz
 */
public class Wrappper {
    public static void main(String[] args) {
        int x=3;
        Integer y=Integer.valueOf(x);//or Integer y=x;   //autoboxing(premetive-->object)
        System.out.println(y);
        
        Integer z=new Integer(4);
        int a=z.intValue();  // or int a=z;   //unboxing(Object-> premetive)
  
        System.out.println(a);           
        
    }
}
