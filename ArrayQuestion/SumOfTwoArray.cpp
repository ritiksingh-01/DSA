#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> a){
    int s = 0;
    int e = a.size() - 1;
    while(s<e){
        swap(a[s++] , a[e--]);
    }
    return a;
}
vector<int> sumOfArray(vector<int> &arr1 , vector <int> arr2){
    int n = arr1.size();
    int m = arr2.size();
    int i = n - 1;
    int j = m - 1;
    vector<int> ans ;
    int carry = 0;
    while (i >= 0 && j >= 0){
        int val1 = arr1[i];
        int val2 = arr2[j];
        int sum = val1 + val2 + carry;
        int carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while (i >= 0){
        int sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    while(j >= 0){
        int sum = arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;

    }
        while(carry != 0){
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
   return reverse(ans);
}


int main(){

vector <int> arr1 = {1,2,4,5,6};
vector <int> arr2 = {2,2};
vector<int> result = sumOfArray(arr1 , arr2);
for(int i : result){
    cout << i << " ";
}
    return 0;
}