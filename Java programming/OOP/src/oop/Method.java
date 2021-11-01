
package oop;

public class Method {
    public static void main(String[] args) {
        Teacher teacher1; //declare
        teacher1=new Teacher();
        teacher1.age=22;
        teacher1.name="Imtiaz";
        teacher1.phno="01521115113";
        teacher1.display();
        
        Teacher teacher2; //declare
        teacher2=new Teacher();
        teacher2.age=17;
        teacher2.name="Moin";
        teacher2.phno="01521114444";
        teacher2.display();
    }
}
