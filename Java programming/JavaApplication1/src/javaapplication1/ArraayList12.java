//searching a number in list using contain method and find its index
//arr.contains(x); and arr.indexof(x); arr.get(i); arr.set(i,x);
package javaapplication1;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author Imtiaz
 */
public class ArraayList12 {
    public static void main(String[] args) {
        ArrayList<Integer> arr=new ArrayList<>();
        int n,x;
        Scanner input=new Scanner(System.in);
        System.out.println("Please input the size of list:");
        n=input.nextInt();
        System.out.println("Please input the array element: ");
        for (int i = 0; i < n; i++) {
            x=input.nextInt();
            arr.add(x);
        }
        
        
        int search;
        System.out.println("Please input a number to see whether it is in the list or not: ");
        search=input.nextInt();
        if(arr.contains(search))
            System.out.printf("%d is in the list and it is in the %dth index.\n",search,arr.indexOf(search));
        else
            System.out.printf("%d is not in the list\n",search);
        
         
        System.out.println("Befor replacing a value list is: ");
        for (int i = 0; i < arr.size(); i++) {
            System.out.printf("%d ",arr.get(i));
        }
        arr.set(n-1,0);
        System.out.print("\nAfter replacing a value the list is:");
        System.out.println(arr);
        
       
    }
}
