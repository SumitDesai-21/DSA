

public class Strings {
    public static void main(String[] args) {
        String a = "sumit";
        String b = "sumit";

        //System.out.println( a == b); // comparator
        
        String name1 = new String("Sumit");

        String name2  = new String("Sumit");

        System.out.println(name1 == name2); // false 
        System.out.println(name1.equals(name2)); // true
        
    }
}
 /**/
/*
public class Strings{
    public static void main(String[] args) {
        int num = 23;
       // float num = 432.1234f;
        // System.out.printf("%.2f",num);
       // System.out.printf("Hello this is %s ","sumit");
       // System.out.printf("%d",num);
       // ASCII value of 0= 48, A = 65, a = 97
       // System.out.println('a' + 'b'); // 97 + 98 = 195
       //System.out.println("a" + "b"); // Concatenate --> ab
       //System.out.println("a" + 1); // "a" + "1" --> a1
       //System.out.println("sumit" + new ArrayList<>()); // Objects will be converted into the string by toString method in java
       // System.out.println(56+""+new ArrayList<>());
    //    String series = "";
    //    for (int i = 0; i < 26; i++) {
    //     char ch = (char)('a' + i);
    //     //System.out.println(ch);
    //     series += ch;
    //    }
    //    System.out.println(series);

    // StringBuilder builder = new StringBuilder();
    // for (int i = 0; i < 26; i++) {
    //     char ch = (char)('a' + i);
    //     builder.append(ch);
    // }
   //System.out.println(builder.charAt(25));
   //System.out.println(builder.deleteCharAt(0));
   //System.out.println(builder.capacity());
   //System.out.println(builder.toString());
   //System.out.println(builder.insert(0,'$'));
   String name = "SUMIT";
   //System.out.println(name.toCharArray());
   //System.out.println(name.toLowerCase());
   //System.out.println("           sumit      ".strip());
   //System.out.println(Arrays.toString(name.toCharArray()));
   //System.out.println(Arrays.toString(name.split(" ")));
   
    }
}
 */
// Palindrome Problem 
// Using For Loop
/* 
public class Strings {
    public static void main(String[] args) {
        String str = null;
        System.out.println(isPalindrome(str));
    }
    static boolean isPalindrome(String str){
        str = str.toLowerCase();
        // edge cases 
        if(str == null || str.length() == 0){
            return true;
        }
        for (int i = 0; i < str.length() /2; i++) {
            char start = str.charAt(i);
            char end = str.charAt(str.length()-1-i);

            if(start != end){
                return false;
            }
        }
        return true;
    }
}
*/
/* 
// Using While Loop
public class Strings{
    public static void main(String[] args) {
        String str = null;
        System.out.println(isPalindrome(str));
    }
    static boolean isPalindrome(String str){
        str = str.toLowerCase();
        int i = 0;
        while (i < str.length()/2) {
            
            char start = str.charAt(i);
            char end = str.charAt(str.length()-1-i);
            if(str.length() == 0){
                return true;
            }
            if(start != end){
                return false;
            }
            i++;
        }
        return true;
    }
}
*/
// 1108. Defanging an IP Address
// Use Replace Method 
// .replace("old char","new char");
/* 
public class Strings {

    public static void main(String[] args) {
        String str = "255.100.50.0";
        System.out.println(defangIPaddr(str));
    }
    static String defangIPaddr(String address) {
        return address.replace(".","[.]");
    }
}
*/
/* 
public class Strings {

    public static void main(String[] args) {
        String s = "codeleet";
        int[] indices = {4,5,6,7,0,2,1,3};
        System.out.println(restoreString(s, indices));
    }
    static String restoreString(String s, int[] indices) {
       char[] ans = new char[s.length()];
       for (int i = 0; i < ans.length; i++) {
        ans[indices[i]] = s.charAt(i);
       }
    return new String(ans);

    }
}
*/

// public class Strings {

//     public static void main(String[] args) {
//         String command = "G()(al)";
//         System.out.println(interpret(command));
//     }
//     static String interpret(String command) {
//         String str = command.replace("()","o");
//         return str.replace("(al)", "al");
//     }
    
// }


// import java.util.Arrays;

// public class Strings {

//     public static void main(String[] args) {
//         // Input sentence
//         String name = "is2 sentence4 This1 a3";

//         // Step 1: Split the input string into words
//         String[] words = name.split(" ");

//         // Step 2: Create an array to store the words in the correct order
//         String[] sortedSentence = new String[words.length];

//         // Step 3: Iterate over the words
//         for (String word : words) {
//             // Extract the number at the end of the word (this tells us the position)
//             int position = word.charAt(word.length() - 1) - '0';  // Convert char to int

//             // Place the word in the correct position in the sorted array (subtract 1 for 0-based index)
//             sortedSentence[position - 1] = word.substring(0, word.length() - 1);  // Remove the number
//         }

//         // Step 4: Join the words to form the final sentence
//         String result = String.join(" ", sortedSentence);

//         // Output the result
//         System.out.println(result);
//     }
// }


// // Group Anagrams
// public class Strings {
//     public static void main(String[] args) {
//         String[] strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
//         System.out.println(groupAnagrams(strs));
//     }
//     static List<List<String>> groupAnagrams(String[] strs) {
//         HashMap<String, List<String>>map = new HashMap<>();
//         for(String str : strs){
//             char[] words = str.toCharArray();
//             Arrays.sort(words);
//             String sortedstring = new String(words);

//             if(!map.containsKey(sortedstring))
//                 map.put(sortedstring, new ArrayList<>());

//             map.get(sortedstring).add(str);
//         }
//         return new ArrayList<>(map.values()); 
//         // return values of map
//         // in the form of arraylist 
//     }
// }       
