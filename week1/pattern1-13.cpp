#include<iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0;
    int s=n;
    for(int i=1;i<2*n;i++){
        (i>n)?c--:c++;
        (i>n)?s++:s--;
        for(int j=1;j<=s;j++){
            cout<<" ";
        }
        for(int j=1;j<=c;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}