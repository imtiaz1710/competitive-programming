package tic.tac.toe.project;

import java.util.Scanner;

/**
 *
 * @author imtiaz
 */
public class TicTacToeProject {

    public static void main(String[] args) {

        //allMethods ob =new allMethods();
        Scanner input = new Scanner(System.in);
        allMethods.initArray();
        do {

            allMethods.changePlayer();
            if (allMethods.isInit()) {
                allMethods.initArray();
            }
            System.out.printf("Player '%c' turn.Please enter the position:\n",allMethods.player);
            allMethods.printBoard();
            
            do {
                allMethods.x=input.nextInt();
                allMethods.y=input.nextInt();
                
                allMethods.x--;
                allMethods.y--;
                
            } while (!allMethods.validMove());
            allMethods.board[allMethods.x][allMethods.y]=allMethods.player;
            allMethods.count++;
            

        } while (!allMethods.hasWinner());
        System.out.printf("Congratulation! Player '%c' Win!\n",allMethods.player);
        allMethods.printBoard();
        input.close();

    }

}
