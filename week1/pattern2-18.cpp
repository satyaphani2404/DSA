#include<iostream>
using namespace std;
int main(){
    int n;
    int c=5;
    cin>>n;
    for(int i=1;i<2*n;i++){
        (i>n)?c++:c--;
        for(int j=n;j>=c;j--){
            cout<<j;
        }
        cout<<endl;

    }
}