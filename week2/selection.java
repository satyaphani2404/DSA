import java.util.*;
public class selection {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t>0)
            {
                int n = sc.nextInt();
                int arr[] = new int[n]; 
                for(int i=0;i<n;i++)
                {
                    arr[i] = sc.nextInt();
                }
            
                Solution obj = new Solution();
                obj.selectionSort(arr, n);
                
                for(int i=0;i<n;i++)
                    System.out.print(arr[i]+" ");
                System.out.println();
                t--;
            }
    }
    
}
class Solution
    {
        int  select(int arr[], int i)
        { 
            
            for(int j=i+1;j<arr.length;j++){
                if(arr[i]>arr[j]) i=j;
            }
            return i;
        }
        
        void selectionSort(int arr[], int n)
        {
            for(int i=0;i<n-1;i++){
                int min=select(arr,i);
                int temp=arr[min];
                arr[min]=arr[i];
                arr[i]=temp;
            }
           
        }

        
    }