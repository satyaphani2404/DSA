import java.util.*;
public class rbubble {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0){
            int n=sc.nextInt();
            int[] arr=new int[n];
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
            }
            rBSolution obj=new rBSolution();
            obj.bubblesort(arr, n);
            for(int i=0;i<n;i++){
                System.out.print(arr[i]+" ");

            }
            System.out.println();
            t--;
        }
    }
    
}

class rBSolution{
    static void bubblesort(int[] arr,int n){
            if(n<=1) return;
            int count=0;
            for(int i=0;i<n-1;i++){
                if(arr[i]>arr[i+1]){
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                    count++;
                }
            }
            if(count==0) return;
            bubblesort(arr, n-1);
    }
}