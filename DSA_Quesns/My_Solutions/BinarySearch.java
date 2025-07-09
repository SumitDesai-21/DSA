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

// floor Problem  
// floor - Greatest element smaller than or equal to target element...!
/* 
public class BinarySearch {
    public static void main(String[] args) {
        int[] nums = {2,3,5,9,14,16,18};
        int target = 15;
        int ans = floor(nums, target);
        System.out.println(ans);
    }
    static int floor(int[]arr,int target){
        int start = 0;
        int end = arr.length-1;
        if(target < arr[0]){
            return -1;
        }

        while (start<=end) {
            int mid = start + ((end-start)/2);
            if(target > arr[mid]){
                start = mid + 1;
            }
            else if (target < arr[mid]) {
                end = mid -1;
            }
            else{
                return arr[mid];
            }
        }
        return arr[end];
    }
}
*/

// Find smallest letter grater than target
/* 
class BinarySearch {
    public static void main(String[] args) {
        char[] letters = {'c','f','j'};
        char target = 'c';
        char ans = nextGreatestLetter(letters, target);
        System.out.println(ans);
    }
    static char nextGreatestLetter(char[] letters, char target) {
        int start = 0;
        int end = letters.length-1;

        while (start<=end) {
            int mid = start + ((end-start)/2);
            if(target < letters[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return letters[start % letters.length];
    
    }
}
*/

// Find First and Last Position of Element in Sorted Array
/* 
public class BinarySearch{
    public static void main(String[] args) {
        int[] nums = {5,7,7,8,8,10};
        int target = 7;
        int[] ans = searchRange(nums, target);
        System.out.println(Arrays.toString(ans));
    }
    
    static int[] searchRange(int[] nums, int target) {
        int[] ans = {-1,-1};

        int start = Search(nums, target, true);
        int end = Search(nums, target, false);

        ans[0] = start;
        ans[1] = end;
        
        return ans;

    }
    static int Search(int[] nums,int target,boolean findStartIndex){
        int ans = -1;
        int start = 0;
        int end = nums.length-1;

        while (start<=end) {
            int mid = start+((end-start)/2);
            if(target > nums[mid]){
                start = mid+1;
            }
            else if(target < nums[mid]){
                end = mid-1;
            }
            else{
                // potential ans found
                ans = mid;

                if(findStartIndex){
                   end = mid-1;
                }
                else{
                   start = mid+1;
                }
            }
        }
        return ans;
    }
}
*/

// Find Position Of An Element In A Sorted Array Of Infinite Numbers
// Amazon Interview Que.
/* 
public class BinarySearch{
    public static void main(String[] args) {
        int arr[] = new int[]{3, 5, 7, 9, 10, 90, 
            100, 130, 140, 160, 170};
        int target = 100;

        System.out.println(ans(arr, target));
    }
    static int ans(int[] arr,int target){
        // First find range of an array
        // Intially take box of 2 elements

        int start = 0;
        int end = 1;

        while (target > arr[end]) {
            int NewStart = end+1;
            // end = previous end + sizeofbox*2
            end = end + (end-start+1) * 2;
            // If 'end' goes out of bounds, set it to the last index of the array
            if (end >= arr.length) {
                end = arr.length - 1;
                break; // Exit the loop to avoid out-of-bounds access
            }
            start = NewStart;
        }
        return binarySearch(arr, target, start, end);
    }
    static int binarySearch(int[] arr,int target,int start,int end){
        
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
                return mid;
            }
        }
        return -1;
       
    }
}
*/

// 852. Peak Index in a Mountain Array
// Find Index of peak(MaxVal) in an Array
// 1st By Using Linear Search 
/* 
public class BinarySearch{
    public static void main(String[] args) {
        int[] nums = {12,24,36,48,11,10,9,8,7,6,4};
        System.out.println(MaxValIndex(nums));
    }
    static int MaxValIndex(int[] arr){

    int largest = 0;
    for ( int i = 1; i < arr.length; i++ ){
      if ( arr[i] > arr[largest] ) {
        largest = i;
      }
    }
    
    return largest; // position of the first largest found
    }
}
*/
// same by me 
/*
public class BinarySearch{
    public static void main(String[] args) {
        int[] nums = {12,24,36,48,11,10,9,8,7,6,4};
        System.out.println(MaxValIndex(nums));
    }
    static int MaxValIndex(int[]arr){
        int Maxi = 0;
        for (int i = 0; i < arr.length; i++) {
            if(arr[i] > arr[Maxi]){
                Maxi = i;
            }
        }
        return Maxi;
    }
}
 */
// 2nd Approach - Using Binary Search
/* 
public class BinarySearch{
    public static void main(String[] args) {
    int[] nums = {0,1,0};
    }
    public int peakIndexInMountainArray(int[] arr) {
        int start = 0;
        int end = arr.length-1;
        while(start  < end){
            int mid = start+(end-start)/2;
            if(arr[mid] > arr[mid+1]){
                // You are in decreasing part of an array
                end = mid;
            }else{
                // You are in Increasing part of an array
                start = mid+1;
            }
        }
        return start; // Or return end (Because at last these pointers are going to point at single element )
        // Which wiil be the largest 

        // Start and end are always trying to find max element in above 2 checks
        // Hence when they're pointing to just on element they're pointing to a max element 

     }
}
*/
// Find In Mountain Array 
// Same Approach just use length() method and get(index) method 
// and MountainArray mountainArr
/*
public class BinarySearch {
    public static void main(String[] args) {
        int[] nums = {1,2,3,4,5,3,1};
        int target = 3;
        System.out.println(Search(nums, target));
    }
    static int Search(int[] arr,int target){

        int peak = peakIndexInMountainArray(arr);

        int firstTry = binarySearch(arr, target,0, peak);
        if(firstTry != -1){
            return firstTry;
        }
        else{
            return binarySearch(arr, target,peak+1,arr.length-1);
        }
    }
    static int peakIndexInMountainArray(int[] arr) {
        
        int start = 0;
        int end = arr.length-1;
        while(start  < end){
            int mid = start+(end-start)/2;
            if(arr[mid] > arr[mid+1]){
                // You are in decreasing part of an array
                end = mid;
            }else{
                // You are in Increasing part of an array
                start = mid+1;
            }
        }
        return start; // Or return end (Because at last these pointers are going to point at single element )
        // Which wiil be the largest 

        // Start and end are always trying to find max element in above 2 checks
        // Hence when they're pointing to just on element they're pointing to a max element 

     }
     static int binarySearch(int[] arr,int target,int start,int end){


        while (start<=end) {
            int mid = start + ((end-start)/2);

            if( arr[start] > arr[end]){
                // it is in descending order
                if(target > arr[mid]){
                    end = mid - 1;
                }
                else if(target < arr[mid]){
                    start = mid + 1;
                }        
            }
            if( arr[start] < arr[end]){
                // it is in ascending order
                if(target < arr[mid]){
                    end = mid - 1;
                }
                else if(target > arr[mid]){
                    start = mid + 1;
                }
            }
            if(arr[mid] == target){
                return mid;
            }
            
        }
        return -1;
    }

}
 */

//  Search in Rotated Sorted Array
// First you'll find Pivot Element then you'll find for target
/* 
public class BinarySearch{
    public static void main(String[] args) {
        int[] nums = {4,5,6,7,0,1,2};
        int target = 3;
        int ans = Search(nums, target);
        System.out.println(ans);
        

    }
    static int Search(int[] nums,int target){
        // edge cases
        int Pivot = findPivot(nums);
        if(Pivot == -1){
            return binarySearch(nums, target,0,nums.length-1);
        }
        if(nums[Pivot] == target){
            return Pivot;
        }
        // Cases
        if(target >= nums[0]){
            return binarySearch(nums, target,0,Pivot-1);
        }
        return binarySearch(nums, target,Pivot+1,nums.length-1);

    }
    static int binarySearch(int[] arr,int target,int start,int end){
        
        while (start <=end) {
            int mid = start + ((end - start) / 2);
            if(target < arr[mid]){
                end = mid - 1;
            }
            else if(target > arr[mid]){
                start = mid+1;
            }
            else{
                // mid is ans
                return mid;
            }
        }
        return -1;
       
    }
    static int findPivot(int[] arr){
        int start = 0;
        int end = arr.length-1;

        while (start<=end) {
            int mid = start+((end-start)/2);

            // Case 1: arr[mid] > arr[mid+1] -> return mid
            if(mid < end && arr[mid] > arr[mid+1]){
                return mid;
            }
            // Case 2:
            if(mid > start && arr[mid] < arr[mid-1]){
                return mid-1;
            }

            // For a Array containing duplicate elements below conditions won't work
            // Case 3:
           // if(arr[start] > arr[mid]){
             //   end = mid-1;
            //}
            //if(arr[start] < arr[mid]){
              //  start = mid+1;
            //}
            // for duplicates 
            // Skip those duplicates 
            // but if start and end are pivots then so first of all check it out
            // if(arr[start] > arr[start+1]){
            //     return start;
            // }
            // start++;
            // if(arr[end] < arr[end-1]){
            //     return end-1;
            // }
            // end--;

            // // So if the left side is sorted pivot should be at right 
            // if(arr[start] <= arr[mid] && arr[mid] > arr[end]){
            //     start = mid+1; 
            // }
            // else{
            //     end = mid-1;
            // }
        }
        return -1;
    }
}
*/

// Find Rotation Count in Rotated Array
// Formula = NoOfRotations = pivot+1;

/* 
public class BinarySearch{
    public static void main(String[] args) {
        int[] nums ={4,5,6,7,0,1,2};
        int pivot = Pivot(nums);
        int NoOfRoations = pivot + 1;
        System.out.println(NoOfRoations);
    }
    static int Pivot(int[] nums){
        int start = 0;
        int end = nums.length-1;

        while (start<=end) {
            int mid = start+ (end-start)/2;
            if(mid < end && nums[mid] > nums[mid+1]){
                return mid;
            }
            if(mid > start && nums[mid] < nums[mid-1]){
                return mid-1;
            }
            if(nums[start]  > nums[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return -1;
    }
}
*/

// Split Array Largest Sum // Hard (Google)
// Re attemp Re Understand it 
/*
public class BinarySearch{
    public static void main(String[] args) {
        
    }
    public int splitArray(int[] nums, int k) {
        int start = 0;
        int end = 0;

        for (int i = 0; i < nums.length; i++) {
            start = Math.max(start, nums[i]);
            end += nums[i];
        }

        // binary search 
        while(start < end){
            int mid = start+((end-start)/2);
            int sum = 0;
            int pieces = 1;
            for(int num:nums){
                if(sum + num > mid){
                    sum = num;
                    pieces ++;
                }
                else{
                    sum += num;
                }
            }
            if(pieces > k){
                start = mid +1;
            }
            else{
                end = mid-1;
            }
        }
        return end;
    }
}
 */

// For Finding sqrt - Use Binary Search
// good que..
// https://leetcode.com/problems/sqrtx/submissions/1405840484
 /* 
public class BinarySearch{
    public static void main(String[] args) {
        int x =8;
        System.out.println(mySqrt(x));
    }
    static int mySqrt(int x) {
        if(x < 2){
            return x;
        }
        int start = 2;
        int end = x/2;
        while(start<=end){
            int mid = start+((end-start)/2);
            long target = (long) mid*mid;

            if(target > x){
                end = mid-1;
            }
            else if(target < x){
                start = mid+1;
            }
            else{
                // target == x
                return mid;
            }
        }
        return end;
    }
}
*/

//Single Element in a Sorted Array - Hold
// Validate Square Roots
/* 
public class BinarySearch {

    public static void main(String[] args) {
        int num = 25;
        System.out.println(isPerfectSquare(num));
    }
    static boolean isPerfectSquare(int num) {

        // edge case 
        if(num == 1){
            return true;
        }
        // Validity
        int start = 1;
        int end = num;

        while(start <= end){
            int mid = start + (end-start)/2;
            if(mid*mid > num){
                end = mid-1;
            }
            else if(mid*mid < num){
                start = mid+1;
            }
            else{
                return true;
            }            
        }
        return false;
    }
}
*/
/* 
// 441. Arranging Coins
public class BinarySearch{
    public static void main(String[] args) {
        int num = 8;
        System.out.println(arrangeCoins(num));
    }
    static int arrangeCoins(int n) {
      int start = 0;
      int end = n;
      while(start <= end){
        int mid = start+(end-start)/2;

        long totalcoins = (long) mid*(mid+1)/2;
        if(totalcoins == n){
            return mid;
        }
        else if(totalcoins > n){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
      }
    return end;  
    }
}
*/

// 540. Single element in a sorted array // mid level question
/*
public class BinarySearch{
    public static void main(String[] args) {
        int[] nums = {1,1,2,2,3,3,4};
        System.out.println(singleNonDuplicate(nums));
    }
    static int singleNonDuplicate(int[] nums) {
        int start = 0;
        int end = nums.length-1;

        while (start<end) {
        int mid = start+(end-start)/2;
        if(mid%2==1){
            mid--;
        }
        if(nums[mid] == nums[mid+1]){
            start = mid + 2;
        }
        else{
            end = mid;
        }
    }
    return nums[end]; // at last end = start

}
}

 */

 // single element in sorted array 
 // [1,1,2,3,3,4,4]
/* 
public class BinarySearch{
    public static void main(String[] args) {
        int[] nums = {1,1,2,2,3,4,4,5,5};
        System.out.println(singleNonDuplicate(nums));
    }
    static int singleNonDuplicate(int [] nums){
        int start = 0;
        int end = nums.length-1;
        while(start < end){
            int mid = start + (end-start)/2;
            if(mid%2==1){
                mid--;
            }
            // if mid is even
            if(nums[mid] == nums[mid+1]){
                start = mid+2;
            }
            else{
                end = mid;
            }
        }
        return nums[start];
    }
}
*/
