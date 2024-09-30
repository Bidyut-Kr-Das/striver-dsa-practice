import java.util.*;

public class Question{

    public static int findElement(int[] arr, int n){
        Arrays.sort(arr);
        return arr[n-1];
    }

    // public static int add(int initialEnergy, int rate, int timeN){
        
    //     int sum = initialEnergy;
    //     for(int i = 0; i < timeN; i++){
    //         initialEnergy += rate;
    //         sum += initialEnergy;
    //         System.out.println(sum + " ");
    //     }
    //     return sum; 
        
        
    // }

    public static void main(String[] args){
        int[] arr = {10, 5,7,88,19};
        int n = 3;
        System.out.println(findElement(arr, n));

    }
}