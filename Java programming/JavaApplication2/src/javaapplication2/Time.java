/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication2;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
/**
 *
 * @author imtiaz
 */
public class Time {
    public static void main(String[] args) {
        LocalTime t = LocalTime.now();
        System.out.println(t);
        DateTimeFormatter f=DateTimeFormatter.ofPattern("hh:mm:ss");
        String s=f.format(t);
        System.out.println(s);
    }
}
