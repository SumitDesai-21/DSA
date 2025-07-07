
// Binary Search 
// 1) For a array with an Ascending Order
public class Binary_search {
    public static void main(String[] args) {
        // int[] nums = {2,4,6,9,11,12,14,20,36,48};
        int[] nums = { 1, 2, 3, 4, 5, 6, 7 };
        int target = 3;
        int ans = binarySearch(nums, target);
        System.out.println(ans);
    }

    static int binarySearch(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;

        while (start <= end) {
            // find the middle element
            // mid = start + end / 2 // There is problem in it
            // There might be a possibility that start + end exceeds range of int in java.
            int mid = start + ((end - start) / 2);
            if (target < arr[mid]) {
                end = mid - 1;
            } else if (target > arr[mid]) {
                start = mid + 1;
            } else {
                // mid is ans
                return mid;
            }
        }
        return -1;

    }
}

// 2) For an Arrays with a descending order
public class Binary_Search {
    public static void main(String[] args) {
        int[] nums = { 100, 81, 64, 49, 36, 25, 16, 9, 4, 1 };
        int target = 25;
        int ans = binarySearch(nums, target);
        System.out.println(ans);
    }

    static int binarySearch(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;

        while (start <= end) {
            // find mid value
            int mid = start + ((end - start) / 2);
            if (target < arr[mid]) {
                start = mid + 1;
            } else if (target > arr[mid]) {
                end = mid - 1;
            } else {
                // mid is ans
                return mid;
            }
        }
        return -1;
    }
}
