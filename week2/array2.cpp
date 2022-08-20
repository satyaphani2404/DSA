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
int sum;
cin>>sum;
Method 1
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]+a[j]==sum){
            cout<<"{"<<a[i]<<","<<a[j]<<"} ";
        }
    }
}
// Method 2
// unordered_set<int> s;
// bool k=false;
// for(int i=0;i<n;i++){
//     if(s.count(a[i])){
//         k=true;
//         cout<<"{"<<sum-a[i]<<","<<a[i]<<"} ";
//     }
//     else{
//         s.insert(sum-a[i]);
//     }
// }
// if(!k){
//     cout<<-1;
// }
// Method 3
int low=0,high=n-1;
while (low<high){
    if(a[low]+a[high]==sum){
        cout<<"{"<<a[low]<<","<<a[high]<<"} ";
        low++;
        high--;
    }
    else if(a[low]+a[high]>sum){
        high--;
    }
    else low++;
}
}