package oop;

public class Teacher1 {

    String name;
    String phno;
    int age;

    Teacher1(String n, String p, int a)     //perameterized constructor
    {
        name = n;
        phno = p;
        age = a;
    }
    Teacher1()  //non perameterized constructor
    {
        System.out.println("No value"); 
    }

    void display() {

        System.out.println("Name:" + name);
        System.out.println("Phno:" + phno);
        System.out.println("Age:" + age);
        System.out.println("");
    }

}
