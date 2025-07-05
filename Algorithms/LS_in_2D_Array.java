import java.util.Arrays;

public class LS_in_2D_Array{
    public static void main(String[] args) {
        int[][] nums = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};

        int target = 9;
        int[] ans = linearSearch(nums, target); // Format of ans is: {row,col}
        System.out.println(Arrays.toString(ans));

    }

    static int[] linearSearch(int[][] arr,int target){
        // edge case
        if(arr.length==0){
            return new int[]{-1,-1}; // That's How we Print
        }
        // Traverse
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr[i].length;j++){
                if(arr[i][j] == target){
                    return new int[]{i,j};
                }
            }
        }
        return new int[]{-1,-1}; // Remember this format
    }

    // Find Max Value in a 2D Array
    static int Max(int[][] arr){
        // edge case 
        if(arr.length==0){
            return -1;
        }
        int maxval = Integer.MIN_VALUE;
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr[i].length;j++){
                if(arr[i][j] > maxval){
                    maxval = arr[i][j];
                }
            }

        }
        return maxval;
    }
}

