
package StaticKeyword;

public class Student {
    String name,id;
    static String uvname="MIU";
    static int cls=10;
    Student(String n,String i)
    {
        name=n;
        id=i;
    }
    void display()
    {
        System.out.println("Name:"+name);
        System.out.println("Id:"+id);
        System.out.println("Uvname:"+uvname);
        System.out.println("Class:"+cls);
    }
}