//bin,hex,oct to dec
package javaapplication2;

import java.util.Scanner;

/**
 *
 * @author imtiaz
 */
public class BinHexOcttoDec {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String binary=input.next();
        int x=Integer.parseInt(binary,2);  //binary ot decimal
        System.out.println(x);
        
        String octal=input.next();
        x=Integer.parseInt(octal,8);  //oct ot decimal
        System.out.println(x);
        
        String hex=input.next();
        x=Integer.parseInt(hex,16);  //hex ot decimal
        System.out.println(x);
    }
}
