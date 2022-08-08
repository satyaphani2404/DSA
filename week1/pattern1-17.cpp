#include<iostream>

using namespace std;
#include<iostream>
using namespace std;
int main()
{
    int row_size;
    cin>>row_size;
    int in,out,p;

    int print_control_x=row_size;
    int print_control_y=row_size;

     for(out=1;out<=row_size;out++)
       {
           for(in=1;in<row_size*2;in++)
           {
               if(in>print_control_x && in<print_control_y)
               {
               cout<<" ";
                 }
               else
               {
                 cout<<"*";
               }
             }
           print_control_x--;
           print_control_y++;
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