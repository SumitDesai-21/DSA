
import java.util.ArrayList;
import java.util.Scanner;

/*
// One Dimensional ArrayList

public class ArrayLists {
    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int x = sc.nextInt();

       ArrayList <Integer> al = new ArrayList<>();
    //    al.add(1);
    //    al.add(2);
    //    al.add(3);

    for(int i=0;i<x;i++){
        al.add(sc.nextInt());
    }
    System.out.println(al);

    }
}
 */
/* 
public class ArrayLists {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<ArrayList<Integer>> list = new ArrayList<>();

        // Initialization
        for(int i=0;i<3;i++){
            list.add(new ArrayList<>()); // added new Arraylist
        }

        // add Elements 
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                list.get(i).add(sc.nextInt()); // (get list at ith index).(add elements to list of corresponding index);
            }
        }
        System.out.println(list);

    }
}
    */
// Swap Elements in an Array
/* 
public class ArrayLists {

    public static void main(String[] args) {
        int[] arr = {1,3,23,9,18};
        swap(arr,1, 3);
        System.out.println(Arrays.toString(arr));
    }
    static void swap(int[] arr ,int index1,int index2){

        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }
}
    */

/*
public class ArrayLists {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[5];

        for(int i=0;i<5;i++){
            arr[i] = sc.nextInt();
        }
        swap(arr,1, 3);
        System.out.println(Arrays.toString(arr));

    }
    static void swap(int[] arr,int index1,int index2){
        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }
}
 */

// Multi - Dimensional ArrayList
public class ArrayLists{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<ArrayList<Integer>> list = new ArrayList<>();
        for(int i=0;i<3;i++){
            list.add(new ArrayList<>());
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                list.get(i).add(sc.nextInt());
            }
        }
        System.out.println(list);
    }
}
