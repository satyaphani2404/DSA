#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int left=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=left || j>=n-left+1){
                cout<<j;
            }
            else{
                cout<<" ";
            }
            
        }
        if(i<=n/2){
                left++;
            }
            else{
                left--;
            }
        cout<<endl;
    }
}