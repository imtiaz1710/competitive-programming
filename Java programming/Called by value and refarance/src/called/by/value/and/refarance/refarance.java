/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package called.by.value.and.refarance;

/**
 *
 * @author imtiaz
 */
public class refarance {
    String s1="Imtiaz";
    void change(refarance r1)
    {
        r1.s1="Moin";
    }
}
