/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication2;

import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.Date;

/**
 *
 * @author imtiaz
 */
public class date {
    public static void main(String[] args) {
        Date d=new Date();
        System.out.println(d);
        SimpleDateFormat df=new SimpleDateFormat("dd/MM/yyyy");
        String s=df.format(d);
        System.out.println(s);
    }
}
