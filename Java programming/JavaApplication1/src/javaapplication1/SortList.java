// Collections.sort(li);  
//Collections.sort(li,Collections.reverseOrder());

package javaapplication1;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

/**
 *
 * @author Imtiaz
 */
public class SortList {
    public static void main(String[] args) {
        ArrayList<Integer> li=new ArrayList<>();
        System.out.println("Please input the size of list: ");
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int x;
        System.out.println("Please Input the elements if the list: ");
        for (int i = 0; i < n; i++) {
            x=input.nextInt();
            li.add(x);
        }
        System.out.println("Before sorting the list is: "+li);
        Collections.sort(li);
        System.out.println("After sorthing in ascending order the list is: "+li);
        
        Collections.sort(li,Collections.reverseOrder());
        
        System.out.println("After sorthing in desending order the list is: "+li);
        
    }
}
