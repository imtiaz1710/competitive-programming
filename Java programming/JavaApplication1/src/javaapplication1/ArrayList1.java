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
public class ArrayList1 {
    public static void main(String[] args) {
        ArrayList<Integer> arr=new ArrayList<>();
        System.out.println(arr.size()); //print the size of the array
        arr.add(1); //array input manual
        arr.add(2);
        arr.add(3);
        arr.add(3,4); //array input in specific index
        System.out.println(arr); //print whole array
        System.out.println(arr.size()); // print final array size
        for(int x:arr)
        System.out.printf("%d ",x); //print using for each loop 
        
        System.out.println("");
        
    }
}
