#include <iostream>
#include <array>
using namespace std ;


int main (){

array<int,4> a = {1,2,3,4};
int size = a.size();
for (int i = 0 ; i<size ; i++){
    cout << a[i]<<" " ;
}cout << endl;
cout << "Element at index 2 :" << a.at(2) << endl;
cout <<"Empty or not :"<< a.empty() <<endl;
cout << "Front element of array : " << a.front() <<endl;
cout << "Last element of array : " << a.back() <<endl;
    return 0;
}