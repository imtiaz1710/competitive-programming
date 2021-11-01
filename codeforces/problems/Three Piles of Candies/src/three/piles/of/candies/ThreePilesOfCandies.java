/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package three.piles.of.candies;

import java.util.Scanner;

/**
 *
 * @author imtiaz
 */
public class ThreePilesOfCandies {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        int t;
        long  a,b,c;
        Scanner input = new Scanner(System.in);
        t=input.nextInt();
        while(t!=0)
        {
            long count;
            long x;
            a=input.nextLong();
            b=input.nextLong();
            c=input.nextLong();
            count=(long) (a%2+b%2+c%2);
            x=(long) (a/2+b/2+c/2);
            x=x+(long)(count/2);
            System.out.println(x);
            t--;
        }
        
    }
    
}
