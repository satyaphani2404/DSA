#include<iostream>
using namespace std;
int main(){
    int n,a=64;
    cin>>n;
    int in=1,fa=2*n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<2*n;j++){
            if(i==j){
                cout<<char(a+n-i+1);
            }
            else if(i==in && j== fa){
                cout<<char(a+n-i+1);
                in++;
                fa--;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    }