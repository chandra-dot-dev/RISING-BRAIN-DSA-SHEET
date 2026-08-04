#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size: ";
    cin>>n;

    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter Target: ";
    cin>>target;
    bool find= false;
    unordered_map<int,int> mpp;
    for(int i =0;i<n;i++){
        int rem = target - arr[i];
        if(mpp.find(rem)!=mpp.end()){
            cout<<"The two elements index is: "<<mpp[rem]+1<<" , "<<i+1;
            find = true;
            break;
        }
        mpp[arr[i]] = i;
    }
    if(!find){
        cout<<"No two elemnts are Not eau to target"<<endl;
    }
    return 0;
    
}