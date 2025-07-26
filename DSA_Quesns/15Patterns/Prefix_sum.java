public class Prefix_sum {
    public static void main(String[] args) {
        // int[] nums = {-2, 0, 3, -5, 2, -1};
        // NumArray num = new NumArray(nums);
        // System.out.println(num.sumRange(2, 5));
        int[] nums = { 1, 1, 1 };
        // System.out.println(findMaxLength(nums));

    }

    // 525. Contiguous Array
    // https://leetcode.com/problems/contiguous-array/description/
    static int findMaxLength(int[] nums) {
        // good
        int n = nums.length;
        Map<Integer, Integer> map = new HashMap<>();
        int sum = 0, subArrayLength = 0;
        for (int i = 0; i < n; i++) {
            sum += (nums[i] == 0) ? -1 : 1;
            if (sum == 0)
                subArrayLength = i + 1;
            else if (map.containsKey(sum)) {
                subArrayLength = Math.max(subArrayLength, i - map.get(sum));
            } else
                map.put(sum, i);
        }
        return subArrayLength;
    }
}
