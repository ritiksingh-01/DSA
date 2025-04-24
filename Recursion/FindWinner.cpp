#include <bits/stdc++.h>
using namespace std;

// int RR(int n, int k) {
//     if (n == 1) return 0;
//     return (RR(n - 1, k) + k) % n;
// }

// int findTheWinner(int n, int k) {
//     int ans = RR(n, k) + 1;
//     return ans;
// }

int winner(vector<bool> &person , int n , int index , int personLeft , int k){
    if(personLeft == 1){
        for(int i = 0 ; i < n ; i++){
            if(person[i] == 0){
                return i;
            }
        }
    }

    int kill = (k-1) % personLeft;
    while(kill--){
        index = (index+1) % n;
        while(person[index] == 1){
            index = (index+1) % n;
        }
    }
    person[index] = 1;
    while(person[index] == 1){
        index = (index - 1) % n;
    }

    return winner(person , n , index, personLeft-1 , k);
}

int main() {
    int n = 5;
    int k = 2; 
    vector<bool> person(n,0);
    int ans = winner(person , n , 0 ,n,k)+1;
    cout << "The winner is: " << ans << endl;
    return 0;
}