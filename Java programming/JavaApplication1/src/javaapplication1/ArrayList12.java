//
package javaapplication1;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author Imtiaz
 */
public class ArrayList12 {
    public static void main(String[] args) {
        ArrayList<Integer> arr=new ArrayList<>();
        int n,x;
        Scanner input=new Scanner(System.in);
        n=input.nextInt();
        for (int i = 0; i < n; i++) {
            x=input.nextInt();
            arr.add(x);
        }
        System.out.println("Before removing all elelment "+arr);
        arr.clear();
        System.out.println("After removing all elelment "+arr);
    }
}
