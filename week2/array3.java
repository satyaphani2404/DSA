package week2;
import java.util.Scanner;


public class array3 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] a=new int[n];
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        int m=sc.nextInt();
        int[] b=new int[m];
        for(int i=0;i<m;i++){
            b[i]=sc.nextInt();
        }
        int o=sc.nextInt();
        int[] c=new int[o];
        for(int i=0;i<o;i++){
            c[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
                for(int k=0;k<m;k++){
                    for(int j=0;j<o;j++){
                        if(a[i]==b[k] && c[j]==b[k]){
                            System.out.println(a[i]+" ");
                        }
                    }
                }
            
            }

            int x=0,y=0,z=0;
            while(x<n &&y<m && z<o){
                if(a[x]==b[y] && b[y]==c[z]){
                    System.out.println(a[x]+" ");
                    x++;
                    y++;
                    z++;
                    }
                else if(b[y]<a[x]){
                    y++;
                }
                else if(c[z]<a[x]){
                    z++;
                }
                else{
                    x++;
                }
            }
            
}
}