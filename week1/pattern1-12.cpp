#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<2*n;j++){
            if(i+j>=11||j-i<=1){
                cout<<" ";
            }
            else{
                cout<<"*";
            }

        }
        cout<<endl;
    }
}