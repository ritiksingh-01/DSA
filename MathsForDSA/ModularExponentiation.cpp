#include<iostream>
using namespace std;
int modularExponentiation(int x , int n , int m){
    int r = 1;
    while(n > 0){
        if(n&1){
            r = ( 1LL * (r)* (x)%m) % m;
        }
        x = (1LL * (x)%m* (x)%m)% m;
        n = n >> 1;
    }
    return r;
}
int main(){
int x , n , m;
cin >> x >> n >> m;

cout << "Result is : " << modularExponentiation(x , n ,m);
    return 0;
}