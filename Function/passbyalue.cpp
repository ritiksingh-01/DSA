#include<iostream>
using namespace std ;

void dummy(int n){
    n++;
    cout << "n is :" << n << endl;
    
} 
int  update(int a ){
    // a = a/2;

    a -= 5;
        cout << a << endl;
    return a ;
}

int main (){
// int n ;
// cin >> n ;

// cout << "Number n is :" << n << endl ;
// dummy(n);

int a ;
cin >> a ;
update(a);
cout << a << endl;
return 0 ;

}