public class recusion {
    // Tower of hanoi 
    static void towershanoi(int ndisks, String src, String Helper, String Dest) {
        // base case
        if(ndisks == 1){
            System.out.println(src + " -> " + Dest);
            return; // breaking point or termination point
        }
        towershanoi(ndisks - 1, src, Dest, Helper);
        System.out.println(src + " -> " + Dest);
        towershanoi(ndisks - 1, Helper, src, Dest);
    }
}
