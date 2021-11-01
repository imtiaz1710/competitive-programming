
package javaapplication1;

import java.util.Scanner;


public class ForEach {
    public static void main(String[] args) {
         String[] str=new String[5];
   Scanner input=new Scanner(System.in);
   int i=0;
 
    for(String x:str)
    {
        
        str[i]=input.next();
        i++;       
    }
    for(String x:str)
    {
        
        System.out.println(x);    
    }
 }    
    
   
}
