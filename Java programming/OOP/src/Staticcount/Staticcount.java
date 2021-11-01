/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Staticcount;

/**
 *
 * @author imtiaz
 */
public class Staticcount {
    String name;
    String id;
    static int count=0;
    Staticcount(String n,String i)
    {
        name=n;
        id=i;
        count++;
    }
    void display()
    {
        System.out.println("Studnet no:"+count);
        System.out.println("Name:"+name);
        System.out.println("Id:"+id);
        System.out.println("");
    }
    
}
