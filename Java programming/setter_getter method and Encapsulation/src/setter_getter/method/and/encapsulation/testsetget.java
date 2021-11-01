/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package setter_getter.method.and.encapsulation;

/**
 *
 * @author imtiaz
 */
public class testsetget {
    public static void main(String[] args) {
        setget ob=new setget();
        ob.setAge(24);
        ob.setName("Imtiaz");
        
        System.out.println("Name:"+ob.getName());
        System.out.println("Age:"+ob.getAge());
    }
}
