#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    int size = nums.size();
    sort(nums.begin() , nums.end());
    for(int i = 0 ; i < size -2 ; i++){
        if(i > 0 && nums[i] == nums[i-1]){
            continue;
        }
        int j = i + 1;
        int k = size -1;
        while( j < k){
            int sum = nums[i] + nums[j] + nums[k];
            if(sum == 0){
                ans.push_back({nums[i],nums[j],nums[k]});
                while( j< k && nums[j] == nums[j+1]){
                    j++;
                }
                while(k<j && nums[k] == nums[k-1]){
                    k--;
                }
                j++;
                k--;
            }
            else if(sum < 0){
                j++;
        }
        else{
            k--;
            }
        }
    }
    return ans;
}

int main(){

vector<int> nums = {-1, 0, 1, 2, -1, -4}; 
    vector<vector<int>> ans = threeSum(nums);
    for(const auto& triplet : ans) {
        for(int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}