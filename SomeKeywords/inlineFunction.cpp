#include<iostream>
using namespace std;

void func(int a , int b){
    a++;
    b++;
    cout << a << endl << b << endl;
}

inline int getMax(int& a , int& b){
    return (a>b) ? a : b ;
}
int main(){
    int a = 3 ;
    int b = 6;
    // func(a,b);
    int ans = getMax(a,b);
    cout << ans << endl;
    a = a + 4;
    b = b - 1;
    ans = getMax(a,b);
    cout << ans << endl;
    return 0;
}