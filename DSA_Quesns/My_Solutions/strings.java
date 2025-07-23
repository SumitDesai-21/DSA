// solutions to few assignments questions:

import java.util.Arrays;

public class strings{
    public static void main(String[] args) {
        String[] word1= {"ab","c"};
        String[] word2 = {"a","cc"};
        System.out.println(arrayStringsAreEqual(word1, word2));
    }
    static boolean arrayStringsAreEqual(String[] word1, String[] word2) {
        // {"ab","c"} , {"a","bc"}
        // ab+c = abc

        String sum1 = "";
        String sum2 = "";

        for (int i = 0; i < word2.length; i++) {
            sum1 += word1[i];
        }
        for (int i = 0; i < word1.length; i++) {
            sum2 += word2[i];
        }
        if(sum1.equals(sum2)){
            return true;
        }
        return false;
    }
    // check if the given string is a palindrome or not

    static boolean isPalindrome(String str){
         int n = str.length();
         str.toLowerCase();
         int start = 0;
         int end = n - 1;

         while(start < end){
             if(str.charAt(start) != str.charAt(end)){
                 return false;
             }
             start++;
             end--;
         }
         return true;
    }
    // check for anagrams
         public static boolean isAnagram(String s1, String s2) {
         if (s1.length() != s2.length()) return false;
        
         // Convert to char arrays
         char[] arr1 = s1.toCharArray();
         char[] arr2 = s2.toCharArray();
        
         // Sort both arrays
         Arrays.sort(arr1);
         Arrays.sort(arr2);
        
         // Compare sorted arrays
         return Arrays.equals(arr1, arr2);
    }

    //  Remove All Vowels From a String
/*
public class strings {
    public static void main(String[] args) {
        String s = "hello world";
        String[] words = s.split("[aeiouAEIOU]+");
        StringBuilder sb = new StringBuilder();
        for(String word : words){
            sb.append(word);
        }
        System.out.println(sb.toString());
    }
}
 */

 // 2nd way
/*
public class strings {
    public static void main(String[] args) {
        String s = "hello world";

        String result = s.replaceAll("[aeiouAEIOU]", "");
        System.out.println(result);
    }
}
 */
}
