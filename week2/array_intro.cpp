#include<iostream>
using namespace std;
int main(){
    
    int a[5];
    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    a[4]=5;
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<endl;
    }
    
}