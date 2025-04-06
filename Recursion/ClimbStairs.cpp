#include<iostream>
using namespace std;


int climbStairs(int n) {
    if(n<0)
        return 0;
    if(n==0)
        return 1;

    return climbStairs(n-1) + climbStairs(n-2); 
}
int climb(int n){
    if(n<=1){
        return 1;
    }

    return climb(n-1) + climb(n-2);

}
int main(){

    int n ;
    cin >> n;
    int ans = climbStairs(n);
    cout << ans << endl;
}