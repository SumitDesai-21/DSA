package PatternProblems;

public class patterns {
    public static void main(String[] args) {
        // patterns_que1(5);
        // patterns_que2(5);
        // patterns_que3(5);
        // patterns_que4(5);
        // patterns_que5(5);
        // patterns_que6(5);
        // patterns_que7(5);
        // patterns_que8(5);
        // patterns_que9(5);
        // patterns_que10(5);
        // patterns_que11(5);
//        patterns_que12(5);
//        patterns_que13(5);
//        patterns_que14(5);
        patterns_que15(5);


    }
    static void patterns_que1(int n){
//        n->number of stars
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    static void patterns_que2(int n){
        for(int i = 1; i<= n; i++){
            for(int j = 1; j <= i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    static void patterns_que3(int n){
        for(int i = 1; i<= n; i++){
            for(int j = 1; j <= n - i + 1; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    static void patterns_que4(int n){
        for(int i = 1; i<= n; i++){
            for(int j = 1; j <= i; j++){
                System.out.print(j + " ");
            }
            System.out.println();
        }
    }
    static void patterns_que5(int n){

        for(int i = 1; i <= 2*n-1; i++){
            if(i <= n){
                for(int j = 1; j <= i; j++){
                    System.out.print("*");
                }
            }
            else{
                for(int j = 1; j <= 2*n-i; j++)
                    System.out.print("*");
            }
            System.out.println();
        }
    }
    static void patterns_que6(int n){
        for(int i = 1; i <= n; i++){
            int spaces = n - i;
            for(int j = 1; j <= spaces; j++){
                System.out.print(" ");
            }
            for(int j = 1; j <= i; j++)
                System.out.print("*");
            System.out.println();
        }
    }
    static void patterns_que7(int n){
        for(int i = 1; i <= n; i++){
            int spaces = i - 1;
            for(int j = 1; j <= spaces; j++){
                System.out.print(" ");
            }
            for(int j = 1; j <= n - i + 1; j++)
                System.out.print("*");
            System.out.println();
        }
    }
    static void patterns_que8(int n){
        for(int i = 1; i <= n; i++){
            int spaces = n - i;
            for(int j = 1; j <= spaces; j++) System.out.print(" ");
            for(int j = 1; j <= 2 * i - 1; j++) System.out.print("*");
            for(int j = 1; j <= spaces; j++) System.out.print(" ");
            System.out.println();
        }
    }
    static void patterns_que9(int n){
        for(int i = 1; i <= n; i++){
            int spaces = i - 1;
            for(int j = 1; j <= spaces; j++) System.out.print(" ");
            for(int j = 1; j <= 2*(n-i) + 1; j++) System.out.print("*");
            for(int j = 1; j <= spaces; j++) System.out.print(" ");
            System.out.println();
        }
    }
    static void patterns_que10(int n){
        for(int i = 1; i <= n; i++){
            int spaces = n - i;
            for(int j = 1; j <= spaces; j++) System.out.print(" ");
            for(int j = 1; j <= i; j++) System.out.print("* ");
            for(int j = 1; j <= spaces; j++) System.out.print(" ");
            System.out.println();
        }
    }
    static void patterns_que11(int n){
        for(int i = 1; i <= n; i++){
            int spaces = i -1;
            for(int j = 1; j <= spaces; j++) System.out.print(" ");
            for(int j = 1; j <= n- i + 1; j++) System.out.print("* ");
            for(int j = 1; j <= spaces; j++) System.out.print(" ");
            System.out.println();
        }
    }
    static void patterns_que12(int n){
        for(int i = 1; i <= 2 *n; i++){
            if(i <= n){
                int spaces = i -1;
                for(int j = 1; j <= spaces; j++) System.out.print(" ");
                for(int j = 1; j <= n- i + 1; j++) System.out.print("* ");
                for(int j = 1; j <= spaces; j++) System.out.print(" ");
            }
            else{
                int spaces = 2*n - i;
                for(int j = 1; j <= spaces; j++) System.out.print(" ");
                for(int j = 1; j <= i -n; j++) System.out.print("* ");
                for(int j = 1; j <= spaces; j++) System.out.print(" ");
            }
            System.out.println();
        }
    }
    static void patterns_que13(int n){
        for(int i = 1; i <= n; i++){
            if(i == 1){
                for(int j = 1; j < n; j++){
                    System.out.print(" ");
                }
                System.out.print("*");
                for(int j = 1; j < n; j++){
                    System.out.print(" ");
                }
            }
            else if(i == n){
                for(int j = 1; j <= 2*n-1; j++){
                    System.out.print("*");
                }
            }
            else{
                for(int j = 1; j <= n - i; j++){
                    System.out.print(" ");
                }
                System.out.print("*");
                for(int j = 1; j <= 2*i-3; j++){
                    System.out.print(" ");
                }
                System.out.print("*");
                for(int j = 1; j <= n - i; j++){
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }static void patterns_que14(int n){
        for(int i = 1; i <= n; i++){
            if(i == 1){
                for(int j = 1; j <= 2*n-1; j++){
                    System.out.print("*");
                }
            }
            else if(i == n){
                for(int j = 1; j < n; j++){
                    System.out.print(" ");
                }
                System.out.print("*");
                for(int j = 1; j < n; j++){
                    System.out.print(" ");
                }
            }
            else{
                for(int j = 1; j <= i - 1; j++){
                    System.out.print(" ");
                }
                System.out.print("*");
                for(int j = 1; j <= 2*n- (2*i + 1); j++){
                    System.out.print(" ");
                }
                System.out.print("*");
                for(int j = 1; j <= i - 1; j++){
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
    static void patterns_que15(int n){
        for(int i = 1; i <= 2*n -1; i++){
            if(i == 1 || i == 2 * n -1){
                for(int j = 1; j < n; j++){
                    System.out.print(" ");
                }
                System.out.print("*");
                for(int j = 1; j < n; j++){
                    System.out.print(" ");
                }
            }
            else if(i <= n){
                for(int j = 1; j <= n - i; j++){
                    System.out.print(" ");
                }
                System.out.print("*");
                for(int j = 1; j <= 2*i-3; j++){
                    System.out.print(" ");
                }
                System.out.print("*");
                for(int j = 1; j <= n - i; j++){
                    System.out.print(" ");
                }
            }
            else{
                for(int j = 1; j <= i-n; j++){
                    System.out.print(" ");
                }
                System.out.print("*");
                for(int j = 1; j <= Math.abs(2*n - (2 * i - 7)); j++){
                    System.out.print(" ");
                }
                System.out.print("*");
                for(int j = 1; j <= i-n; j++){
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}
