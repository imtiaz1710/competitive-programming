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
public class MethodOverriding {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic herep
        person p=new person();
        p.age=5;
        p.name="Imtiaz";
        p.displayinfo();
        
        teacher t=new teacher();
        t.age=6;
        t.name="MOin";
        t.sub="Arabic";
        t.displayinfo();
    }
    
}
