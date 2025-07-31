
public class Searching {
    public static void main(String[] args) {
        int[] nums = { 2, 3, 4 };
        int target = 6;
        System.out.println(Arrays.toString(twoSum(nums, target)));

    }

    static int[] twoSum(int[] numbers, int target) {
        // Linear Search
        for (int i = 0; i < numbers.length; i++) {
            for (int j = 0; j < numbers.length; j++) {
                if (numbers[i] + numbers[j] == target && i != j) {
                    return new int[] { i + 1, j + 1 };
                }
            }
        }
        return new int[] { -1, -1 };
    }
}
