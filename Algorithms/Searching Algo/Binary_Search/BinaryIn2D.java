import java.util.Arrays;
public class BinaryIn2D{
    

    public static void main(String[] args) {
        int[][] matrix = {
                {1,4,9},
                {16,25,36},
                {49,64,81}
        };

        System.out.println(Arrays.toString(search(matrix,36)));
    }


    static int[] search(int[][] arr, int target) {

        int rStart=0;
        int rEnd=arr.length-1;
        int cEnd=arr[0].length-1;
        int rMid=-1;
        while(rStart<=rEnd){
            rMid=rStart+(rEnd-rStart)/2;
            if(arr[rMid][cEnd]==target){
                return new int[]{rMid,cEnd};
            }
            else if(arr[rMid][cEnd]<target){
                rStart=rMid+1;

            }
            else
                rEnd=rMid-1;
        }
        int start=0;
        int end=arr[rMid].length-1;
        while(start<=end) {
            int mid=start+(end-start)/2;
            if (arr[rMid][mid] == target) {
                return new int[] {rMid,mid};
            } else if (arr[rMid][mid] < target) {
                start = mid + 1;
            } else
                end = mid - 1;
        }
        return new int[] {-1,-1};
    }
}
