/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package java_beginning_problem_solving;

/**
 *
 * @author imtiaz
 */
public class Box {
    double height,width,depth;
    Box(double h,double w,double d)
    {
        height=h;
        width=w;
        depth=d;
    }
    void display()
    {
        System.out.println("The volume of the box is:"+height*width*depth);
    }
}
