#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int pos =0;
    for(int i =0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[pos++]);
        }
    }
    cout<<"After Moving Zeroes to End: ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}