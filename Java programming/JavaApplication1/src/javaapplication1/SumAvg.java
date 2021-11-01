package javaapplication1;

import java.util.Scanner;

public class SumAvg {

    public static void main(String[] args) {
        double sum = 0;
        Scanner input = new Scanner(System.in);
        System.out.println("Plese enter the size of array: ");
        int n = input.nextInt();
        double[] arr = new double[n];
        for (int i = 0; i < n; i++) {
            arr[i] = input.nextDouble();
            sum = sum + arr[i];

        }
        System.out.println("The sum of the numbers is: " + sum);
        System.out.println("The arverage is: " + sum / n);
    }

}
