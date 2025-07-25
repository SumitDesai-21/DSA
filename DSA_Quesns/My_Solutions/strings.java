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

// Longest Common Prefix
/*
public class strings {
    public static void main(String[] args) {
        String[] strs = {"flower","flow","flight"};
        System.out.println(longestCommonPrefix(strs));
    }
    static String longestCommonPrefix(String[] strs) {
        StringBuilder sb = new StringBuilder();
        String first = strs[0];
        String last = strs[strs.length - 1];

        for(int i = 0; i < Math.min(first.length(), last.length()); i++){
            if(first.charAt(i) != last.charAt(i))
                return sb.toString();
            sb.append(first.charAt(i));
        }
        return sb.toString();
    }
}
*/


// Reverse The Words in String
/*
public class strings {
    public static void main(String[] args) {
        String s = "the sky is blue";
        System.out.println(reverseWords(s));
    }

    static String reverseWords(String s) {
        String[] words = s.split("[  ]+");
        StringBuilder sb = new StringBuilder();

        for (int i = words.length - 1; i >= 0; i--) {
            sb.append(words[i]).append(" ");
        }
        return sb.toString().trim();
    }
}
 */


// Remove All Occurrences of a Substring
/*
public class strings {
     public static void main(String[] args) {
         String s = "daabcbaabcbc";
         String part = "abc";
         System.out.println(removeOccurrences(s, part));
     }
     static String removeOccurrences(String s, String part) {
         StringBuilder sb = new StringBuilder();
         sb.append(s);

         while(sb.toString().contains(part)){
             String[] words = sb.toString().split(part);
             sb.delete(0, sb.toString().length());
             for(String word : words){
                 sb.append(word);
             }
         }
         return sb.toString();
     }
 }

 */

 
/*
//  More Efficient Approach
 // Using indexOf() function
 public class strings {
     public static void main(String[] args) {
         String s  = "aabababa";
         String part = "aba";
         System.out.println(removeOccurrences(s, part));
     }
     static String removeOccurrences(String s, String part) {
         StringBuilder sb = new StringBuilder(s);
         // intially sb is s
         while(sb.indexOf(part) != -1){
             int idx = sb.indexOf(part);
             sb.delete(idx, idx + part.length());
         }
         return sb.toString();
     }
 }

  */

  /*
    // All possible substrings of a string. O(n2)
public class strings {
    public static void main(String[] args) {
        String str = "pwwkew";
        for(int s = 0; s < str.length(); s++){
            for(int e = s + 1; e <= str.length(); e++){
                System.out.println(str.substring(s, e));
            }
        }
    }
}
   */

