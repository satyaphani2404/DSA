#include<iostream>
#include<cmath>
using namespace std;
int main(){
     int row_size;
    cin>>row_size;
    int in,out,p;
   int print_control_x=row_size/2+1;

     for(out=1;out<=row_size;out++)
       {
           for(in=1;in<=row_size;in++)
           {
               if(in==print_control_x || in==row_size-print_control_x+1)
               {
               cout<<"*";
                 }
               else
               {
                 cout<<" ";
               }
             }
           if(out<=row_size/2)
            print_control_x--;
           else
              print_control_x++;
            cout<<"\n";
     }
    
}
