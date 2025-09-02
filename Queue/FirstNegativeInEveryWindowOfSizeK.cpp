#include <bits/stdc++.h>
using namespace std;

// tc = o(nk) , sc = o(k)

void display(queue<int> q) // o(k)
{
    int ele = 0;
    while (!q.empty())
    {
        if (q.front() < 0)
        {
            ele = q.front();
            break;
        }
        q.pop();
    }
    cout << ele << " ";
}
void firstNegative(vector<int> &arr, int k)
{
    queue<int> q;
    int n = arr.size();
    for (int i = 0; i < k - 1; i++)
    {
        q.push(arr[i]);
    } // o(k)
    for (int i = k - 1; i < n; i++)
    {
        q.push(arr[i]); // o(1)
        display(q);     // O(k)
        q.pop();        // O(1)
    } // O(n + k);
}

// optimal approach  tc = O(n)

vector<int> firstNegInt(vector<int> &arr, int k)
{
    // write code here
    queue<int> q;
    for(int i = 0 ; i < k - 1 ; i++){
        if(arr[i] < 0){
            q.push(i);
        }
    }
    vector<int> ans ;
    for(int i = k - 1 ; i < arr.size() ; i++){
        if(arr[i] < 0) {
            q.push(i);
        }
        if(q.empty()) {
            ans.push_back(0);
        }else{
            if(q.front() <= i - k) {
                q.pop();
            }
            if(q.empty()){
                ans.push_back(0);
            }else{
                ans.push_back(arr[q.front()]);
            }
        }
    }
    return ans;
}

int main()
{

    vector<int> arr{12, -1, -7, 8, -15, 30, 16, 28};
    int k = 3;
    // firstNegative(arr, k);
    vector<int> ans = firstNegInt(arr , k);
    for(int i  : ans ){
        cout << i << " ";
    }
    return 0;
}