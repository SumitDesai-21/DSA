import java.util.Scanner;

public class Array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[][] arr = new int[3][3];

        for (int i = 0; i < arr.length; i++) {
            // Outer loop
            for (int j = 0; j < arr[i].length; j++) {
                arr[i][j] = sc.nextInt();
            }
        }

        // 1st Way to Print an Array

        for (int i = 0; i < arr.length; i++) {
            // Outer loop
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }

        // 2nd Way to Print an Array (Best Approach)

        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }

        // 3rd Approach - Enhanced For Loop (For Each Loop)

        for (int[] x : arr) {
            System.out.println(x);
        }

        // Case : If Columns are not fixed
        // eg. 1 Way
        int[][] arr1 = {
                { 1, 2, 3, 4 },
                { 4, 5 },
                { 7, 8, 9 }
        };

        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }

        // 2nd Way
        int[][] arr2 = new int[3][3];
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                arr[i][j] = sc.nextInt();
            }
        }

        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
        sc.close();
    }

    // Max Value in an array 1st way
    static int max1(int[] arr) {
        int maxval = arr[0];
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > maxval) {
                maxval = arr[i];
            }
        }
        return maxval;
    }

    // Max Value in an array 2nd Approach
    static int max2(int[] arr, int start, int end) {
        int maxval = arr[start];

        for (int i = start; i <= end; i++) {
            if (arr[i] > maxval) {
                maxval = arr[i];
            }
        }
        return maxval;
    }
    // reverse an array
    static void swap(int[] arr, int i1, int i2) {
        int temp = arr[i1];
        arr[i1] = arr[i2];
        arr[i2] = temp;
    }

    static void reverse(int[] arr) {
        int start = 0;
        int end = arr.length - 1;

        while (start < end) {
            swap(arr, start, end);
            start++;
            end--;
        }
    }
}
