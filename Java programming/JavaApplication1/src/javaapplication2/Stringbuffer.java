/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication2;

/**
 *
 * @author Imtiaz
 */
public class Stringbuffer {
    public static void main(String[] args) {
        StringBuffer sb=new StringBuffer("Imtiaz ");
        sb.append("Zaman");
        System.out.println(sb);
        System.out.println(sb.reverse());
        System.out.println(sb.delete(0, 6));
        System.out.println(sb.reverse());
        sb.setLength(3);
        System.out.println(sb);
         
    }
}
