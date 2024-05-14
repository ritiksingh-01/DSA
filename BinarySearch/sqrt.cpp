#include <iostream>
#include<algorithm>
using namespace std ;
int sqrt(int n ){
    int s = 0 ;
    int e = n - 1 ;
    long long int ans = -1 ;
    long long int mid = s + (e-s)/2;
    while (s<e){
        long long int square = mid * mid;
        if (square == n){
            return mid ;
        }
        if (square < n ){
            ans = mid;
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
int n ;
cout <<"Enter the value of n : ";
cin >> n;
int result = sqrt(n);
cout << endl;
cout << "Square root of " << n << " is : "<<result; 

    return 0;
}