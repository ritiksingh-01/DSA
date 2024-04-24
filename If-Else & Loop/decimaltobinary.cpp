#include<iostream>
#include<math.h>
using namespace std ;

int main (){
// int n ;
// cin >> n;
// if (n<0){
//     n = -n;
// }
// int m = ~n;
// int ans = 0 , i=0;
// while (m!=0){
// int bit = m&1;
// ans = (bit * pow(10 ,i))+ans;
// m = m>>1;
// i++;
// }  
// cout <<"Answer : " <<ans << endl;

// binary to decimal 

// int n ;
// cin >> n;
// int ans = 0 , i = 0;
// while (n!=0){
//     int digit = n % 10;
//     if (digit == 1 ){
//         ans = ans + pow (2,i);
//     }
//     n = n/10;
//     i++;
// }
// cout << ans << endl;


int n ;
cin >> n ;
int m = n;
int mask = 0;
if (n==0){
    return 1;
}
while (m!=0){
     mask = (mask << 1) | 1;
    m = m >> 1;
}
int res = (~n) & mask;
cout << res ;
    return 0;
}