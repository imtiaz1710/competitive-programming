
package tic.tac.toe.project;

/**
 *
 * @author imtiaz
 */
public class allMethods {
    static char[][] board=new char[3][3];
    static char player='x';
    static int count=0;
    static int x;
    static int y;
   
    public static boolean hasWinner()
    {
        if (x==0 && y==0) {
            return situation1()==true || situation4()==true || situation7()==true;
            
        }
        else if (x==0 && y==1) {
            return situation1()==true || situation5()==true;
            
        }
        else if (x==0 && y==2) {
            return situation1()==true || situation6()==true || situation8()==true;
            
        }
        else if (x==1 && y==0) {
            return situation2()==true || situation4()==true;
            
        }
        else if (x==1 && y==1) {
            return situation2()==true || situation7()==true || situation5()==true;
            
        }
        else if (x==1 && y==2) {
            return situation2()==true || situation6()==true;
            
        }
        else if (x==2 && y==0) {
            return situation3()==true || situation4()==true || situation8()==true;
            
        }
        else if (x==2 && y==1) {
            return situation3()==true || situation5()==true;
            
        }
        else if (x==2 && y==2) {
            return situation3()==true || situation6()==true || situation7()==true;
            
        }
        return (false);
    }
    
    public static void initArray()
    {
        count=0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                board[i][j]='-';
            }
        }
    }
    
    public static void printBoard()
    {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.printf("%c ",board[i][j]);
            }
            System.out.println();
        }
    }
    
    public static boolean validMove()
    {
        if (x>=0 && x<=2 && y>=0 && y<=2 && board[x][y]!='x' && board[x][y]!='o') {
            
            return true;
        }
        else
        {
            System.out.println("Invalid move! Enter again:");
            return false;
        }
            
    }
    
    public static void changePlayer()
    {
        if(player=='x')
            player='o';
        else
            player='x';
    }
    
    public static boolean isInit()
    {
        if (count==9) {
            System.out.println("Game tie!");
            System.out.println("Reset new board and starting again!");
            return true;
            
        }
        else
           return false;
    }
    
     private static boolean situation1()
    {
        return board[0][0]==player && board[0][1]==player && board[0][2]==player;
        
    }
    private static boolean situation2()
    {
        return board[1][0]==player && board[1][1]==player && board[1][2]==player;
        
    }
    private static boolean situation3()
    {
        return board[2][0]==player && board[2][1]==player && board[2][2]==player;
        
    }
    private static boolean situation4()
    {
        return board[0][0]==player && board[1][0]==player && board[2][0]==player;
        
    }
    private static boolean situation5()
    {
        return board[0][1]==player && board[1][1]==player && board[2][1]==player;
        
    }
    private static boolean situation6()
    {
        return board[0][2]==player && board[1][2]==player && board[2][2]==player;
        
    }
    private static boolean situation7()
    {
        return board[0][0]==player && board[1][1]==player && board[2][2]==player;
        
    }
    private static boolean situation8()
    {
        return board[0][2]==player && board[1][1]==player && board[2][0]==player;
        
    }
   

   
    
    
}
