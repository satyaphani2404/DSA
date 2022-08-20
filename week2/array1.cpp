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
// method 1
// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         if (a[i]==a[j])
//         {
//             /* code */
//             cout<<a[j]<<" ";
    
//         }
        
//     }
// }
//  method 2
// sort(a, a + n);
// for(int i=0;i<n-1;i++){
//     if(a[i]==a[i+1]){
//         cout<<a[i]<<" ";
//         i++;
//     }
// }
// Method 3
unordered_set<int> s;
bool k=false;
for(int i=0;i<n;i++){
    if(s.count(a[i])){
        k=true;
        cout<<a[i]<<" ";
    }
    else{
        s.insert(a[i]);
    }
}
if(!k){
    cout<<-1;
}
}