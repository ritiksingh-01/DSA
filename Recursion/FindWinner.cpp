#include <bits/stdc++.h>
using namespace std;

int RR(int n, int k) {
    if (n == 1) return 0;
    return (RR(n - 1, k) + k) % n;
}

int findTheWinner(int n, int k) {
    int ans = RR(n, k) + 1;
    return ans;
}

int main() {
    int n = 5;
    int k = 2; 
    int winner = findTheWinner(n, k);
    cout << "The winner is: " << winner << endl;
    return 0;
}