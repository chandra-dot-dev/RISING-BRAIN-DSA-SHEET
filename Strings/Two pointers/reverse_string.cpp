#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
    int r = s.size()-1;
     int l =0;
     while(l<r){
         char c= s[l];
         s[l] = s[r];
        s[r] = c;
         l++,r--;
     }
 }
 int main(){
    int n;
    cin>>n;
    vector<char> st(n);
    for(int i =0;i<n;i++){
        cin>>st[i];
    } 
    reverseString(st);
    for(auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
 }
