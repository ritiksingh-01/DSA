#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;

int isPossible(vector<int> &arr ,int size ,int k ,int mid){
    int cowCount = 1;
    int lastPos = arr[0];
    for (int i = 0 ; i < size ; i++){
        if (arr[i]-lastPos >= mid){
            cowCount ++;
            if (cowCount == k){
                return true ;
            }
            lastPos = arr[i];
        }
    }
   return false ; 
}
int aggressiveCow(vector<int> &arr,int size ,int k){
    sort(arr.begin(), arr.end());
    int s = 0;
    int maxi = -1;
    for (int i = 0 ; i < size ; i++){
        maxi = max(maxi , arr[i]);
    }
    int e = maxi ;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e){
       if (isPossible(arr , size , k , mid)){
        ans = mid ;
        s = mid + 1 ;
       } 
       else {
        e = mid - 1 ; 
       }
       mid = s + (e-s)/2;
    }
return ans ;
}
int main (){
vector <int> arr;
arr.push_back(4);
arr.push_back(2);
arr.push_back(1);
arr.push_back(3);
arr.push_back(6);
int k = 2 ;
int result = aggressiveCow(arr,5,k);
 for (int i : arr){
    cout << i ;
}cout << endl;
cout <<"Maximum distance is : " << result ;
    return 0;
}