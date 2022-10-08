import java.util.Scanner;

public class bubble {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0){
            int n=sc.nextInt();
            int[] arr=new int[n];
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
            }
            BSolution obj=new BSolution();
            obj.bubblesort(arr, n);
            for(int i=0;i<n;i++){
                System.out.print(arr[i]+" ");

            }
            System.out.println();
            t--;
        }
    }
}
class BSolution{
    static void bubblesort(int[] arr,int n){
            for(int i=0;i<n-1;i++){
                for(int j=0;j<n-1-i;j++){
                    if(arr[j]>arr[j+1]){
                        int temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
                }
            }
    }
}