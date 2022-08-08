#include<iostream>

using namespace std;
int main(){
    int n,r;
    cin>>n;
    r=n;
    for(int i=1;i<2*n;i++){
        for(int j=1;j<=r;j++){
            cout<<"*";
        }
        if(i<n){
            r--;
        }
        else{
            r++;
        }
        cout<<endl;
    }
}
