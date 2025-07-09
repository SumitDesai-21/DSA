import java.util.Arrays;

public class CycleSort {
    public static void main(String[] args) {
        int[] nums = {9,8,7,6,5,4,3,2,1};
        cycleSort(nums);
        System.out.println(Arrays.toString(nums));

    }
    static void cycleSort(int[] arr){
        int i=0;
        while(i < arr.length){
            int index = arr[i] - 1;
            if(arr[index] != arr[i]){
                swap(arr, index, i);
            }
            else{
                i++;
            }
        }
    }
    static void swap(int[] arr,int first,int second){
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
}

