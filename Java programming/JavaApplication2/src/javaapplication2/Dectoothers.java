/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication2;

import java.util.Scanner;

/**
 *
 * @author imtiaz
 */
public class Dectoothers {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int i = input.nextInt();
        String bin = Integer.toBinaryString(i); //dec to bin
        System.out.println("bin=" + bin);

        String oct = Integer.toOctalString(i); //dec to bin
        System.out.println("Oct=" + oct);

        String hex = Integer.toHexString(i); //dec to bin
        System.out.println("Hex=" + hex);

    }
}
