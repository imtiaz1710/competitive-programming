/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package oop;

/**
 *
 * @author imtiaz
 */
public class obj {
    public static void main(String[] args) {
        Teacher teacher1; //declare
        teacher1=new Teacher();
        teacher1.age=22;
        teacher1.name="Imtiaz";
        teacher1.phno="01521115113";
        System.out.println("Name="+teacher1.name);
        System.out.println("Phno="+teacher1.phno);
        System.out.println("Age="+teacher1.age);
        
        Teacher teacher2; //declare
        teacher2=new Teacher();
        teacher2.age=17;
        teacher2.name="Moin";
        teacher2.phno="01521114444";
        System.out.println("Name="+teacher2.name);
        System.out.println("Phno="+teacher2.phno);
        System.out.println("Age="+teacher2.age);
        
    }
}
