/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package variablelengthargument;

/**
 *
 * @author imtiaz
 */
public class varargs {
    void add(int ... num)
    {
        int sum=0;
        for(int x: num)
        {
            sum+=x;
        }
        System.out.println("Sum is:"+sum);
    }
}
