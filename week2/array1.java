package week2;
import java.io.*;
import java.lang.*;
import java.util.*;

public class array1 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] ar=new int[n];
        for(int i=0;i<n;i++){
            ar[i]=sc.nextInt();
        }
        // Method 1
//         for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         if (ar[i]==ar[j])
//         {
//             System.out.print(ar[j]+" ");
//         }
//     }
// }
// Method 2
// Arrays.sort(ar);
// for(int i=0;i<n-1;i++){
//     if(ar[i]==ar[i+1]){
//         // cout<<a[i]<<" ";
//         System.out.print(ar[i]+" ");
//         i++;
//     }
// }
// Method 3
Set<Integer> unqui=new HashSet<>();
boolean k=false;
for(int i=0;i<n;i++){
    if(unqui.contains(ar[i])){
        k=true;
        System.out.print(ar[i]+" ");
    }
    else{
        unqui.add(ar[i]);
    }
}
if(!k){
    System.out.print("-1");
}
    }
}
