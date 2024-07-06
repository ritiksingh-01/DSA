#include<iostream>
using namespace std;

int power(int k , int n ){
    if(n==0)
        return 1;
    
    return k * power(k,n-1);
}

int main(){
    int n ;
    cin >> n;
    int k ;
    cin >> k;
    int ans = power(k,n);
    cout << ans  << endl;
    return 0;
}