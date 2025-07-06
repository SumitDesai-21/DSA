import java.util.Arrays;

public class LS_in_Strings {
    // String - An Array of Characters

    public static void main(String[] args) {
        String name = "Sumit";
        char target = 'u';
        boolean ans = linearSearch(name, target);
        // System.out.println(ans);
        System.out.println(Arrays.toString(name.toCharArray()));
    }

    static boolean linearSearch(String str, char target) {
        // edge case
        if (str.length() == 0) {
            return false;
        }
        // Traverse
        for (int i = 0; i < str.length(); i++) {
            char element = str.charAt(i);
            if (element == target) {
                return true;
            }
        }
        // Using For Each Loop

        for (char element : str.toCharArray()) {
            if (element == target) {
                return true;
            }
        }

        return false;
    }
}
