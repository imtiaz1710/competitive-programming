//n2.addAll(n1);  

package javaapplication1;

import java.util.ArrayList;

/**
 *
 * @author Imtiaz
 */
public class ArrayList13 {
    public static void main(String[] args) {
        ArrayList<Integer> n1=new ArrayList<>();
        ArrayList<Integer> n2=new ArrayList<>();
        
        n1.add(1);
        n1.add(2);
        n1.add(3);
        n1.add(4);
        
        System.out.println("Values of n1: "+n1);
        n2.addAll(n1);
        System.out.println("Values of n2: "+n2);
        
        if(n1.equals(n2))
            System.out.println("n1 is equal to n2.");
        else
            System.out.println("n1 is not equal to n2.");
    }
}
