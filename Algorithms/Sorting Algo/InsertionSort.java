import java.util.Arrays;

public class InsertionSort {
    public static void main(String[] args) {
        int[] nums = { 110, 100, 0 };
        insertionSort(nums);
        System.out.println(Arrays.toString(nums));
    }

    static int insertionSort(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = i + 1; j > 0; j--) {
                if (arr[j] < arr[j - 1]) {
                    swap(arr, j, j - 1);
                } else {
                    break;
                }
            }
        }
        return -1;
    }

    static void swap(int[] arr, int first, int second) {
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
}
