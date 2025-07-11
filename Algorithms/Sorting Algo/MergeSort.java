import java.util.Arrays;

public class MergeSort {
    static int[] mergesort(int[] nums){
        // not in place sorting
        // base case
        if(nums.length == 1)
            return nums;
        // mid value
        int mid = nums.length/2;
        // left half array
        int[] left = mergesort(Arrays.copyOfRange(nums, 0, mid));
        // right half array
        int[] right = mergesort(Arrays.copyOfRange(nums, mid, nums.length));

        return merge(left, right);
    }
    static int[] merge(int[] f, int[] s){
        int[] mix = new int[f.length + s.length];
        int i = 0;
        int j = 0;
        int k = 0;

        while(i < f.length && j < s.length){
            if(f[i] < s[j]){
                mix[k] = f[i];
                i++;
            }
            else{
                mix[k] = s[j];
                j++;
            }
            k++;
        }
        while(i < f.length){
            mix[k] = f[i];
            i++;
            k++;
        }
        while(j < s.length){
            mix[k] = s[j];
            j++;
            k++;
        }
        return mix;
    }

}
