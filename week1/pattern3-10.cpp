#include<iostream>
using namespace std;
int main(){
    int n,a=64;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<char(a+j)<<" ";
        }
        cout<<endl;

    }
}