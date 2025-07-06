package Binary_Search;

// Order Agnostic Binary Search
// It is mentioned that the array is sorted but not mentioned it is ascending or descending
public class Order_Agnostic_BS {
    public static void main(String[] args) {
        // int[] nums = {100,81,64,49,36,25,16,9,4,1};
        int[] nums = { 2, 4, 6, 9, 11, 12, 14, 20, 36, 48 };

        int target = 3;
        int ans = binarySearch(nums, target);
        System.out.println(ans);
    }

    static int binarySearch(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;

        while (start <= end) {
            int mid = start + ((end - start) / 2);

            if (arr[start] > arr[end]) {
                // it is in descending order
                if (target > arr[mid]) {
                    end = mid - 1;
                } else if (target < arr[mid]) {
                    start = mid + 1;
                }
            }
            if (arr[start] < arr[end]) {
                // it is in ascending order
                if (target < arr[mid]) {
                    end = mid - 1;
                } else if (target > arr[mid]) {
                    start = mid + 1;
                }
            }
            if (arr[mid] == target) {
                return mid;
            }

        }
        return -1;
    }
}
