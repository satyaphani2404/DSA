#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=n+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j-i>=0){
                cout<<(j-i+1);
            }
            else{
            cout<<" ";
        }
        
        }
        cout<<endl;
    }
}