#include<iostream>
using namespace std;
int main(){
    int a=64,n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n;j++){
            cout<<char(a+i)<<" ";
        }
        cout<<endl;
    }
}