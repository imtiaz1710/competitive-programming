/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package methodoverriding;

/**
 *
 * @author imtiaz
 */
public class teacher extends person {
    String sub;
    void displayinfo()
    {
        System.out.println("Name:"+name);
        System.out.println("Age:"+age);
        System.out.println("Subject:"+sub);
    }
}
