#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int missingnum(vector<int>&nums,int n){
            //using sum formula o(n)
            //if we sort and traverse take then o(nlogn)
         int sum=n*((n+1)/2);
         int s=0;
         for(int i=0;i<nums.size();i++){
            s+=nums[i];
         }
         return sum-s;
        }
};

 int main(){
    Solution sol;
    vector<int>nums={5,2,1,7,6,4};
    int n=7;
    cout<<"Missing number is "<<sol.missingnum(nums,n);
 }