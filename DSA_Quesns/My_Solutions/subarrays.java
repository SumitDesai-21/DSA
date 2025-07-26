public class subarrays {
    //int[] nums = {1, 2, 3, 4, 5}
    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 4, 5};
        printSubarrays(nums, nums.length);
    }
    static void printSubarrays(int[] nums, int len){
        for(int s = 0; s  < len; s++){
            for(int e = s; e < len; e++){
                for(int  i = s; i <= e; i++){
                    System.out.print(nums[i]);
                }
                System.out.print(" ");
            }
            System.out.println();
        }
    }
}
