/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Instance_local_veriable_solution;

/**
 *
 * @author imtiaz
 */
public class This {
    int i;
    
    This(int i)
    {
        this.i=i;       //this keyword should use to assign value in instance i
        System.out.println(i);
    }
    
    public static void main(String[] args) {
       This ob=new This(3);
     
    }
}
