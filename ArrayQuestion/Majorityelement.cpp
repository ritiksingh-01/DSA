#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int count = 0;    
    int element = 0; 
    for (int i = 0; i < nums.size(); i++) {
        if (count == 0) {
            element = nums[i];
            count++;
        } else if (element == nums[i]) {
            count++;
        } else {
            count--;
        }
    }
    return element; 
}

int main(){
    vector<int> nums = {1,2,2,3,4,4,4,5,5};
    int res = majorityElement(nums);
    cout << res ;
    return 0;
}
