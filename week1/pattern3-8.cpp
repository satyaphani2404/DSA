#include<iostream>
using namespace std;
int main(){
    int n,a=64;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<char(a+j)<<" ";
        }
        cout<<endl;

    }
}