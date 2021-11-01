/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hackerrank;

import static java.lang.Math.pow;
import java.util.Scanner;

/**
 *
 * @author Imtiaz
 */
public class Javaloop2 {
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int sum=a;
            for(int j=0;j<n;j++)
            {
                sum+=(pow(2,j)*b);
                System.out.printf("%d ",sum);
                
            }
            System.out.println();
        }
        in.close();
    }
}
