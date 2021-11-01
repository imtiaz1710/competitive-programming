package odd.sum.segments;

import java.util.Scanner;

public class OddSumSegments {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int q = input.nextInt();
        while (q != 0) {
            int count = 0, j = 0;
            int n = input.nextInt();
            int k = input.nextInt();
            int tmpk = k;
            int[] a = new int[n];
            int[] b = new int[k];

            for (int i = 0; i < n; i++) {
                a[i] = input.nextInt();
                if (a[i] % 2 == 1) {
                    count++;
                    if(tmpk!=0) {
                        b[j++] = i + 1;
                        tmpk--;
                    }

                }

            }

            if (count < k || (count % 2 != k % 2)) {
                System.out.println("NO");
            } 
            else {
                System.out.println("YES");

                for (int i=0;i<k-1;i++) {
                    System.out.printf("%d ", b[i]);
                }
                System.out.printf("%d ", n);

                System.out.println();
            }

            q--;
        }

    }

}
