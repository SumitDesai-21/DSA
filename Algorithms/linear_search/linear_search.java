
public class linear_search {
    public static void main(String[] args) {
        int[] nums = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        int target = 1;
        // int ans = linearSearch(nums,target);
        // System.out.println(ans);

        int ans = linearSearch2(nums, target);
        System.out.println(ans);
    }
    // Search in the array : Return the index if item found
    // Otherwise return -1

    static int linearSearch(int[] arr, int target) {
        // edge case
        if (arr.length == 0) {
            return -1;
        }
        // run a for loop
        for (int i = 0; i < arr.length; i++) {
            int element = arr[i];
            if (element == target) {
                return i; // Here i is Index
            }
        }
        return -1;
    }

    // search in the array : Return the element if item found
    // Otherwise return Integer.MAX_VALUE (because index cannot be -1 but element
    // can be)

    static int linearSearch2(int[] arr, int target) {
        if (arr.length == 0) {
            return -1;
        }
        // run a for loop

        for (int element : arr) {
            if (element == target) {
                return element;
            }
        }
        return -1;
    }

    // search in the array : Return true or false

    static boolean linearSearch3(int[] arr, int target) {
        // edge case
        if (arr.length == 0) {
            return false;
        }
        // run a for loop
        for (int i = 0; i < arr.length; i++) {
            int element = arr[i];
            if (element == target) {
                return true;
            }
        }
        return false;
    }    
}
