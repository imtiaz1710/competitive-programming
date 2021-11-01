/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package called.by.value.and.refarance;

/**
 *
 * @author imtiaz
 */
public class CalledbyValueandRefarance{
    public static void main(String[] args) {
        int a=5;
        value v=new value();
        v.change(a); //called by value
        System.out.println(a); //no change in variable 'a'
        
        
        refarance r1 =new refarance();
        System.out.println(r1.s1);
        refarance r2=new refarance();
        r2.change(r1);
        System.out.println(r1.s1); //pass by referance
       
        
    }
    
    
}
