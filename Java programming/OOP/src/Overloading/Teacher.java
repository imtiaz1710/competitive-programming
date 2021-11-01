//constructor overloading
package Overloading;


public class Teacher {
    String name,id;
    int age;
    Teacher()
    {
        System.out.println("No value");
    }
    Teacher(String n,String i)
    {
       name=n;
       id=i;
    }
    Teacher(String n,String i,int a)
    {
       name=n;
       id=i; 
       age=a;
    }
    void display()
    {
        System.out.println("Name:"+name);
        System.out.println("ID:"+id);
        System.out.println("Age:"+age);
    }
}