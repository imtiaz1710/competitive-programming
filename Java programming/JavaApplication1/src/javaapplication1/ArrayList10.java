/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication1;

import java.util.ArrayList;
import java.util.Iterator;

/**
 *
 * @author Imtiaz
 */
public class ArrayList10 {
    public static void main(String[] args) {
        ArrayList<Integer> arr=new ArrayList<>();
        arr.add(1);
        arr.add(2);
        arr.add(3);
        arr.add(4);
        Iterator it=arr.iterator();
        while(it.hasNext())
            System.out.printf("%d ",it.next());
        
        System.out.println("");
    }
}
