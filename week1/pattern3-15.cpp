#include<iostream>
using namespace std;
int main(){
    int n,a=64;
    cin>>n;

    for(int i=n;i>=1;i--){
        for(int j=1;j<n-i+1;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<char(a+i);
        }
        cout<<endl;

    }
}