/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package superkeyword;


public class C2 extends C1 {
    int x=10;
    @Override
    void display()
    {
        super.display();
        System.out.println("Printing form C2 class");
        System.out.println(super.x);
    }
}
