#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    int c=0;
    cin>>n;
    for(int i=1;i<2*n;i++){
        (i>n)?c--:c++;
        for(int j=1;j<=c;j++){
            cout<<"* ";
        }
        cout<<endl;

    }
}
// logic one
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// 2nd logic
// int main()
//  {
//     int n;
//     cin>>n;
//     for(int i=n;i>=-(n-1);i--){
//         for(int j=(n-1);j!=abs(i);j--){
//             cout<<" ";
//         }

//         for(int j=(n-1);j>=abs(i);j--){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
