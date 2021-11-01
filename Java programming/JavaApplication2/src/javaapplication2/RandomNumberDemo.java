/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication2;

import java.util.Random;

/**
 *
 * @author imtiaz
 */
public class RandomNumberDemo {

    public static void main(String[] args) {
        Random r = new Random();
        int i=r.nextInt(10); //0 to 10
        System.out.println(i);
        
        i=r.nextInt(6)+5; //5 to 10
        System.out.println(i);
        
        i=(int) (Math.random()*4); //access random number using Math class
        System.out.println(i);
        
        double d=Math.random()*10; //access double random number
        System.out.println(d);
        

    }
}