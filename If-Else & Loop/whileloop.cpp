#include <iostream>
using namespace std;

int main (){
int n ,i = 0 ;
cin >>n ;
while (i <= n){
    cout << i <<"\t";
    i++;
}
int sum = 0;
while (i <= n){
 sum = sum + i ;
 i++;
}
cout << sum ;

// even numbers  

while (i <= n){
    if (i%2 == 0){
        cout << i <<"\t";
    }
    i++;
}


return 0 ;
}