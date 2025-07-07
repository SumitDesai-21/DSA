// find Ceiling value in given array
// Ceiling Value  - Greatest element smaller than or equal target...!

public class BinarySearch {
    public static void main(String[] args) {
        int[] nums = {2,3,5,9,14,16,18};
        int target = 15;
        int ans = Ceiling(nums, target);
        System.out.println(ans);
    }
    static int Ceiling(int[] arr,int target){
        int start = 0;
        int end = arr.length-1;
        if(target > arr[arr.length-1]){
            return -1;
        }
        
        while (start <=end) {
            // find the middle element
            // mid = start + end / 2 // There is problem in it
            // There might be a possibility that start + end exceeds range of int in java.
            int mid = start + ((end - start) / 2);
            if(target < arr[mid]){
                end = mid - 1;
            }
            else if(target > arr[mid]){
                start = mid + 1;
            }
            else{
                // mid is ans
                return arr[mid];
            }
        }
        return arr[start]; // when loop will break start will be pointing to ceiling value
    }
}
