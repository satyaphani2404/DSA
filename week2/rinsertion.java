import java.util.*;
public class rinsertion {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0){
            int n=sc.nextInt();
            int[] arr=new int[n];
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
            }
            rISolution obj=new rISolution();
            obj.rinsertionsort(arr, n);
            for(int i=0;i<n;i++){
                System.out.print(arr[i]+" ");

            }
            System.out.println();
            t--;
        }
    }
}
class rISolution{
    static void rinsertionsort(int arr[],int n){
        if(n<=1) return;
        rinsertionsort(arr,n-1);
        int key=arr[n-1];
        int j=n-2;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}