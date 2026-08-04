#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size of Array: ";
    cin>>n;
    
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int i =0;
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for(int i =0;i<n;i++){
        if(i >0 && nums[i]==nums[i-1]){
            continue;
        }
        int j = i+1,k=n-1;
        while(j<k){
            int sum = nums[i]+nums[j]+nums[k];
            if(sum==0){
                ans.push_back({nums[i],nums[j],nums[k]});
                j++,k--;
                while(j<k && nums[j]==nums[j-1]) j++;
                while(j<k && nums[k]==nums[k+1]) k--;
            }
            else if(sum>0){
                k--;
            }else if(sum<0){
                j++;
            }
        }
    }
    for(auto it:ans){
        cout<<"[ ";
        for(int num:it){
            cout<<num<<" ";
        }
        cout<<"]";
    }
    return 0;


}