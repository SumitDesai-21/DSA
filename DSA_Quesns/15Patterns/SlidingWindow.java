public class SlidingWindow {
    // fundamental problem of sliding window pattern
    // Leetcode Q.643 Maximum Average Subarray I
    public double findMaxAverage(int[] nums, int k) {
        int sum = 0;
        for (int i = 0; i < k; i++)
            sum += nums[i];
        int maxSum = sum;
        for (int i = k; i < nums.length; i++) {
            sum += nums[i] - nums[i - k];
            maxSum = Math.max(maxSum, sum);
        }
        return (double) maxSum / k;
    }
     // Longest Substring Without Repeating Characters
    // left is sliding pointer
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        int l = 0, Maxlen = 0;
        HashSet<Character> set = new HashSet<>();
        for (int i = 0; i < n; i++) {
            if(!set.contains(s.charAt(i))){
                set.add(s.charAt(i));
                // i - l + 1 => len of substring
                Maxlen = Math.max(Maxlen, i - l + 1);
            }
            else{
                while(set.contains(s.charAt(i))){
                    set.remove(s.charAt(l));
                    l++;
                }
                set.add(s.charAt(i));
            }
        }
        return Maxlen;
    }
}
