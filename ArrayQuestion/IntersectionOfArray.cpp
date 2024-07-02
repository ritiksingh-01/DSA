#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin() , nums1.end());
    sort(nums2.begin() , nums2.end());
    vector<int> ans;
    int l = 0;
    int r = 0;
    while(l<nums1.size() && r<nums2.size()){
        if(nums1[l] < nums2[r]){
            l++;
            }else if(nums1[l] > nums2[r]){
            r++;
        }
        else{
            ans.push_back(nums1[l]);
            l++;
            r++;
        }
    }
    return ans;
}

int main(){
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};
    vector<int> ans = intersect(nums1,nums2);
    for(int i : ans){
        cout << i << " " ;
    }
    return 0;
}