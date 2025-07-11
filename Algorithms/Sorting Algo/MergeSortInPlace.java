
import java.util.Arrays;


public class MergeSortInPlace{
    public static void main(String[] args) {
        int[] nums = {5, 4, 3, 2, 1};
        mergesortInplace(nums, 0, nums.length);
        System.out.println(Arrays.toString(nums));
    }
    // in place merge sort algorithm
    // very nice approach
    static void mergesortInplace(int[] arr, int s, int e) {
        // base case
        if (e - s <= 1) // nums.length <= 1
            return;
        int mid = (s + e) / 2;
        // sort left
        mergesortInplace(arr, s, mid);
        // sort right
        mergesortInplace(arr, mid, e);

        mergeInplace(arr, s, mid, e);
    }

    static void mergeInplace(int[] arr, int s, int m, int e) {
        int[] mix = new int[e - s]; // e-s == nums.length
        int i = s;
        int j = m;
        int k = 0;
        while (i < m && j < e) {
            if (arr[i] < arr[j]) {
                mix[k] = arr[i];
                i++;
            } else {
                mix[k] = arr[j];
                j++;
            }
            k++;
        }
        while (i < m) {
            mix[k] = arr[i];
            i++;
            k++;
        }
        while (j < e) {
            mix[k] = arr[j];
            j++;
            k++;
        }
        // modify original array
        for (int l = 0; l < mix.length; l++) {
            arr[s + l] = mix[l];
        }
    }
}
