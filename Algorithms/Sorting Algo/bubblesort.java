
import java.util.Arrays;

// Mine Way
// BubbleSort In Array

 public class BubbleSort {
     public static void main(String[] args) {
         int[] nums = {5, 4, 3, 2, 1};
         bubbleSort(nums);
         System.out.println(Arrays.toString(nums));
     }
     static void bubbleSort(int[] arr){
         boolean swapped;
         // Outer loop
         for (int i = 0; i < arr.length; i++) {
             swapped = false;
             // Inner Loop
             for (int j = 1; j < arr.length-i; j++) {
                 // Swap 
                 if(arr[j] < arr[j-1]){
                     int temp = arr[j];
                     arr[j] = arr[j-1];
                     arr[j-1] = temp;
                     swapped = true;
                 }
             }
             if (!swapped) {
                break;
             }
         }
        
     }
 }
