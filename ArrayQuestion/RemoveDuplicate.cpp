#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int j = 1;
    for(int i = 1 ; i < nums.size() ; i++){
        if(nums[i] != nums[i-1]){
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}

int main(){
vector <int> nums = {1,1,2};
int ans = removeDuplicates(nums);
cout << ans;
    return 0;
}