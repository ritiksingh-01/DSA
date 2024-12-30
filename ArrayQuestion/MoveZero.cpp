#include<iostream>
#include<vector>
using namespace std ;

// brute force approach
void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] != 0){
            temp.push_back(nums[i]);
            }
        }
        int nz =temp.size();
        for(int i = 0 ; i < nz ; i++){
            nums[i]=temp[i];
        }
        for(int i = nz ; i < n ; i++){
            nums[i]=(0);
        }    
}

// optimal approach
void moveZero(vector<int> &arr ,int size){
    int i = 0 ;
    for(int j = 0 ; j < size ; j++){
        if(arr[j] != 0){
            swap(arr[j],arr[i]);
            i++;
        }
    }

}

int main (){
vector<int> arr = {0,1,0,3,12,0,6,7};
moveZero(arr , 8);
for(int i = 0 ; i<8 ; i++){
    cout << arr[i] << " ";
}
    return 0;
}