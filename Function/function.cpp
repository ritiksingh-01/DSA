#include <iostream>
using namespace std ;

int power (int a , int b ){
    int ans = 1 ;
    for (int i = 1 ; i <= b ; i++){
        ans = ans * a ;
    }
    return ans ;
}

int fact (int a ){
    int fact = 1 ;
    for (int i = 1 ; i<=a ; i++){
        fact = fact * i;
    }
    return fact ;
}
int nCr(int n , int r){
    int result ;
    int num = fact(n);
    int denom = fact (r)*fact(n-r);
    // result = (fact(n))/(fact(r)*fact(n-r));
    result = num / denom;
    return result ;
}
int ap(int n ){
    int AP = (3*n) + 7;
    return AP;
}

int main (){

// int a , b ;
// cin >> a >> b ;
// int answer =  power(a , b);
// cout << answer;

// int n , r ;
// cin >>  n >> r ;
// int answer = nCr(n , r);
// cout << answer << endl;


int n ;
cin >> n ;
cout << ap(n);
    return 0;
}