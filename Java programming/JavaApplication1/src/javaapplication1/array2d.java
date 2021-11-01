/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication1;

import java.util.Scanner;


public class array2d {
    public static void main(String[] args) {
        int n;
        Scanner input=new Scanner(System.in);
        n=input.nextInt();
        int[][] arr=new int[n][];
        int i=0;
        int j=n;
        while(i!=j)
        {
           arr[i]=new int[i+1];
           i++;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                arr[i][j]=input.nextInt();
            }
        }
    
        for( i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                System.out.printf("%d ",arr[i][j]);
            }
            System.out.println();
        }
  }
}

