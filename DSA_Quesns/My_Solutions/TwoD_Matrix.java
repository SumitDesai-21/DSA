package Data_Structures;

import java.util.ArrayList;
import java.util.List;
// search in 2D Matrix
// public class TwoD_Matrix {
//     public static void main(String[] args) {
//         int[][] matrix = {
//                             {1, 3, 5, 7},
//                             {10, 11, 16, 20},
//                             {23, 30, 34, 60}
//                             };
//         int target = 3;
//         System.out.println(searchMatrix(matrix, target));
//     }
//    static boolean searchMatrix(int[][] matrix, int target) {
//         for(int i = 0; i < matrix.length; i++){
//             for(int j = 0; j < matrix[i].length; j++){
//                 if(matrix[i][j] == target)
//                     return true;
//             }
//         }
//         return false;
//     }
// }

// spiral matrix 
public class TwoD_Matrix {
    public static void main(String[] args) {
        int[][] matrix = { 
                        {1, 2, 3}, 
                        {4, 5, 6},
                        {7, 8, 9}
                        };
        System.out.println(spiralOrder(matrix));
    }
    static List<Integer> spiralOrder(int[][] matrix) {
        ArrayList <Integer> list = new ArrayList<>();
        int m = matrix.length;
        int n = matrix[0].length;
        int srow = 0, scol = 0, erow = m - 1, ecol = n - 1;
        
        // loop
        while(srow <= erow && scol <= ecol){
            // Top Boundary
            for(int j = scol; j <= ecol; j++)
                list.add(matrix[srow][j]);
            
            // Right
            for(int i = srow + 1; i <= erow; i++)
                list.add(matrix[i][ecol]);

            // bottom
            for(int j = ecol - 1; j >= scol; j--){
                if(srow == erow)
                    break;
                list.add(matrix[erow][j]);
            }
            
            // left 
            for(int i = erow - 1; i >= srow + 1; i--){
                if(scol == ecol)
                    break;
                list.add(matrix[i][scol]);
            }
            srow++; erow--; scol++; ecol--;
        }
        return list;
    }
}
