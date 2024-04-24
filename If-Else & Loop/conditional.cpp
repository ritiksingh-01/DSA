#include <iostream>
using namespace std;

int main() {
//  int a , b;
//  cout << "Enter the value of a"<<endl ;
//  cin >> a ;
//  cout << "Enter the value of b"<<endl ;
//  cin >> b ;
// if (a==b){
//     cout << "Equal";
// }
// else if (a > b){
//     cout << "A is greater ";
// }
// else {
//     cout << "B is greater";
// }

char ch ;
cout << "Enter the char :"<<endl;
cin >> ch ;
if (ch >='a' && ch <= 'b'){
    cout << "Lower case"<<endl;
}
else if (ch >= 'A' && ch <='Z'){
    cout << "Upper case"<<endl;
}
else if (ch >= '0' && ch <= '9' ) {
    cout << "Numeric"<<endl;
}


  return 0;
}