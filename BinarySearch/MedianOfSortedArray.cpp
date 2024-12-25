#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

double findMedian(vector<int> nums , int n){
    sort(nums.begin(),nums.end());
        if(n%2==0){
        double y=(nums[n/2]+nums[(n-2)/2])/2.0;
        return y;
        }
        return nums[n/2]; 
}

int main(){
    vector<int> nums = {1,2,3,4,3,5,6};
    int n = nums.size();
    cout << findMedian(nums,n);
}