#include<iostream>
using namespace std;
int main(){
    int n,a=64;
    cin>>n;
    int c=n;
    for(int i=1;i<=2*n;i++){
        

        for(int j=n;j>=c;j--){
            cout<<char(a+j)<<" ";
        }
        (i>=n)?c++:c--;
        cout<<endl;

    }
    
}
