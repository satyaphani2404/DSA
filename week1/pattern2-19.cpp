#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=n;
    int c=n;
    for(int i=0;i<=2*n+1;i++){
        for(int j=0;j<=n;j++){
            if(i+j<=n||i-j>n+1){
                cout<<" ";
            }
            else{
                cout<<j;
            }
        }
        cout<<endl;
    }
}