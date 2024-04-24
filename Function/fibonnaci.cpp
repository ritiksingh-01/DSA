#include <iostream>
using namespace std ;

// int swap(int a , int b){
//     int c ;
//     c=a ;
//     a = b;
//     b = c;
//     return c ;
// }
void fibonnaci(int n){
int a = 0 , b = 1 ;
    cout << a <<" "<< b ;
for (int i = 1 ; i <=n ; i++){
    int c = a+b;
    cout<<" "<< c ;
    a = b ;
    b = c ;
}  
}
int main (){
 int n ;
  cin >> n ;
  fibonnaci(n);
    return 0;
}