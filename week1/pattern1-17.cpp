#include<iostream>

using namespace std;
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int left=n;
    int right=n;

     for(int i=1;i<=n;i++)
       {
           for(int j=1;j<n*2;j++)
           {
               if(j>left && j<right)
               {
               cout<<" ";
                 }
               else
               {
                 cout<<"*";
               }
             }
           left--;
           right++;
            cout<<"\n";
     }
}

// int main(){
//     int n;
//     cin>>n;
//     int count=0;
//     while(count<n){
//         for(int i=1;i<=n-count;i++){
//             cout<<"*";
//         }
//         for(int i=1;i<=count*2;i++){
//             cout<<" ";
//         }
//         for(int i=1;i<=n-count;i++){
//             cout<<"*";
//         }
//         count++;
//         cout<<endl;
//     }
// }