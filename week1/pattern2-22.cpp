#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,b=1;
    int c;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<b<<" ";
            c=a+b;
            a=b;
            b=c;
            
        }
        cout<<endl;
    }
}