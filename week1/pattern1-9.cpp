#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c=0;
    for(int i=1;i<2*n;i++){
        i>n?c--:c++;
        for(int j=1;j<=abs(n-i);j++){
        cout<<" ";
        } 
        for(int j=1;j<c;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}