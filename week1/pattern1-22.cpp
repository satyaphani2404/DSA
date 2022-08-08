#include<iostream>

using namespace std;
int main(){
        int n;
        cin>>n;
        int print_control_x=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(j<=print_control_x||j>=n-print_control_x+1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            if(i<=n/2)
        	   print_control_x++;
           else
              print_control_x--;
            cout<<endl;
        }
}