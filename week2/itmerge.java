import java.util.*;
public class itmerge {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0){
            int n=sc.nextInt();
            int[] arr=new int[n];
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
            }
            ImSolution obj=new ImSolution();
            obj.imergeSort(arr);
            for(int i=0;i<n;i++){
                System.out.print(arr[i]+" ");

            }
            System.out.println();
            t--;
    }
}
}

class ImSolution{
    void imergeSort(int[] array)
    {
        
        if(array==null){
            return;
        }
        if(array.length>1){
            int mid=array.length/2;
            int[] left=new int[mid];
            for(int i=0;i<mid;i++){
                left[i]=array[i];
            }
            int[] right = new int[array.length - mid];
            for(int i = mid; i < array.length; i++)
            {
                right[i - mid] = array[i];
            }
            imergeSort(left);
            imergeSort(right);
            int i = 0;
            int j = 0;
            int k = 0;
            while(i<left.length && j<right.length){
                if(left[i]<right[j]){
                    array[k++]=left[i++];
                }
                else{
                    array[k++]=right[j++];
                }
            }
            while(i<left.length){
                array[k++]=left[i++];
            }
            while(j<right.length){
                array[k++]=right[j++];
            }
        }
    }
 
}
