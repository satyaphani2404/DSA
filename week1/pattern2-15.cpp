#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=1;
    for(int i=1;i<=2*n;i++){
        for(int j=1;j<=n-k;j++){
            cout<<" ";
        }
        for(int j=1;j<=k;j++){
            cout<<k<<" ";
        }
        if(i<n){
            k++;
        }
        else{
            k--;
        }
        cout<<endl;
    }
}
    