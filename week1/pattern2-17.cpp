#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int in=1,fa=2*n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<2*n;j++){
            if(i==j){
                cout<<i;
            }
            else if(i==in && j== fa){
                cout<<i;
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