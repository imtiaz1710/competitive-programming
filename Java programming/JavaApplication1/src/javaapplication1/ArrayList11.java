/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication1;

import java.util.ArrayList;

/**
 *
 * @author Imtiaz
 */
public class ArrayList11 {
    public static void main(String[] args) {
        ArrayList<Integer> arr=new ArrayList<>();
        arr.add(0);
        arr.add(2);
        arr.add(4);
        arr.add(6);
        arr.add(8);
        arr.add(10);
        
        System.out.println("Before removing:"+arr);
        
        arr.remove(3); //remove an element from array
        arr.remove(4);
         
        System.out.println("After removing 2 elements "+arr);
        
        arr.removeAll(arr);
        
        System.out.println("After removing all elements"+arr);
    }
}
