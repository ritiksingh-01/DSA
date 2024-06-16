#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int num){
    if(num <= 1){
        return false;
    }
    for(int i = 2 ; i<= sqrt(num); i++ ){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}
long long productOfPrime(long long l , long long r){
    long long product = 1;
    for(int i = l ; i <=r ; i++){
        if(isPrime(i)){
            product *= i;
        }
    }
    return product;
}

int main(){
long long l , r ;
cin >> l >> r;
long long pro = productOfPrime(l , r);
cout << "Product of prime number is : " << pro;
    return 0;
}