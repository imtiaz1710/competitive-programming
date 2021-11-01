
package oop;

public class Constructor {
    public static void main(String[] args) {
        Teacher1 teacher1=new Teacher1("Imtiaz","0152143523",23);
        teacher1.display();
        
        Teacher1 teacher2=new Teacher1("Moin","0152144444",16);
        teacher2.display();
        
        Teacher1 teacher3=new Teacher1("Symaiya","015256774444",12);
        teacher3.display();
        
        Teacher1 teacher4=new Teacher1();
        teacher4.display();
    }
}
