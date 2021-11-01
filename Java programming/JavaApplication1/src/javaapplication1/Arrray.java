/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication1;

/**
 *
 * @author Imtiaz
 */
public class Arrray {
    public static void main(String[] args) {
        int[] arr;
        arr=new int[10];
        for (int i = 0; i < 10; i++) {
            arr[i]=i;
        }
        for (int i = 0; i < 10; i++) {
            System.out.println(arr[i]);
        }
        System.out.println("Size of the array is: "+arr.length);
        
    }
}
