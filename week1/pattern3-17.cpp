#include<iostream>
using namespace std;
int main(){
    int n,a=64;
    cin>>n;
    int c=n;
    int s=1;
    for(int i=1;i<=2*n;i++){
        for(int j=1;j<=n-s;j++){
            cout<<" ";            
        }

        for(int j=c;j<=n;j++){
            cout<<char(a+j);
        }
        (i>=n)?c++:c--;
        (i>=n)?s--:s++;

        cout<<endl;

    }
    
}

//      F
//     EF
//    DEF
//   CDEF
//  BCDEF
// ABCDEF
//  BCDEF
//   CDEF
//    DEF
//     EF
//      F