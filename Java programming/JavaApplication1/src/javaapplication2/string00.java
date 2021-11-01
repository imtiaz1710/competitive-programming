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
public class string00 {
    public static void main(String[] args) {
    String s1=new String("imtiaz mehedi ");
    String s2="IMTIAZ MEHEDI ";

        System.out.println(s1.equals(s2));
        System.out.println(s1.equalsIgnoreCase(s2));
        System.out.println(s1.contains("ed"));
        System.out.println(s1.isEmpty());
        String s3=s1+s2;
        System.out.println(s3);
        s3=s2.concat(s1);
        System.out.println(s3);
        String s4=s3.toUpperCase();
        System.out.println(s4);
        s4=s3.toLowerCase();
        System.out.println(s4);
        System.out.println(s4.startsWith("imtiaz"));
        System.out.println(s4.endsWith("mehedi "));
        System.out.println(s4.charAt(4));
        System.out.println(s4.codePointAt(4));
        System.out.println(s4.indexOf("imtiaz"));
        System.out.println(s4.lastIndexOf("imtiaz"));
        System.out.println(s4.trim());
        System.out.println(s4.replace('i', 'I'));
        String[] s5=s4.split(" ");
        for(String s:s5)
            System.out.println(s);
        
        
 }

}
