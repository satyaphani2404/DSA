package week2;

import java.util.Scanner;
import java.util.*;
public class array2 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] ar=new int[n];
        for(int i=0;i<n;i++){
            ar[i]=sc.nextInt();
        }
        int sum=sc.nextInt();
        // Method 1
// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         if(ar[i]+ar[j]==sum){
//             System.out.print("{"+ar[i]+","+ar[j]+"} ");
//         }
//     }
// }
// Method 2
// Set<Integer> unqui=new HashSet<>();
// boolean k=false;
// for(int i=0;i<n;i++){
//     if(unqui.contains(sum-ar[i])){
//         k=true;
//         System.out.print("{"+(sum-ar[i])+","+ar[i]+"} ");
//     }
//     else{
//         unqui.add(ar[i]);
//     }
// }
// Method 3 best solution for sorted array
int low=0,high=n-1;
while(low<high){
    if(ar[low]+ar[high]==sum) {
        System.out.print("{"+ar[low]+","+ar[high]+"} ");
        low++;
        high--;
    }
    else if(ar[low]+ar[high]>sum){
        high--;
    }
    else low++;
}
    }
}
