#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int m;
cin>>m;
int b[m];
for(int i=0;i<m;i++){
    cin>>b[i];
}
int o;
cin>>o;
int c[o];
for(int i=0;i<o;i++){
    cin>>c[i];
}
// cout<<"{";
// for(int i=0;i<n;i++){
//     for(int k=0;k<m;k++){
//         for(int j=0;j<o;j++){
//             if(a[i]==b[k] && c[j]==b[k]){
//                 cout<<a[i];
//             }
//         }
//     }

// }
// cout<<"}";
int x=0,y=0,z=0;
while(x<n &&y<m && z<o){
    if(a[x]==b[y] && b[y]==c[z]){
        cout<<a[x]<<" ";
        x++;
        y++;
        z++;
        }
    else if(b[y]<a[x]){
        y++;
    }
    else if(c[z]<a[x]){
        z++;
    }
    else{
        x++;
    }
}

}