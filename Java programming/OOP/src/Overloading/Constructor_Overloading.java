/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Overloading;

/**
 *
 * @author imtiaz
 */
public class Constructor_Overloading {
    public static void main(String[] args) {
        Teacher t1=new Teacher();
        t1.display();
        
        Teacher t2=new Teacher("Imtiaz","1949");
        t2.display();
        
        Teacher t3=new Teacher("Moin","1955",16);
        t3.display();
        
        
    }
}
