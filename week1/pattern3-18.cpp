#include<iostream>
using namespace std;
int main(){
    int n,a=64;
    cin>>n;
    int s=1;
    // int
    for(int i=1;i<2*n;i++){
        for(int j=1;j<=n-s;j++){
            cout<<" ";
        }
        for(int j=1;j<=s;j++){
            cout<<char(a+s)<<" ";
        }
    (i>=n)?s--:s++;
    cout<<endl;
    }
}
