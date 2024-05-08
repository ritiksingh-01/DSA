#include <iostream>
#include <vector>
using namespace std ;

int main (){
vector <int > v;
vector <int> a(5,1);
cout << "Element of a : ";
for (int i : a){
    cout << i <<" " ;
}cout << endl;
cout <<"Capacity of vector : "<< v.capacity() << endl;

v.push_back(1);
v.push_back(2);
v.push_back(3);
cout <<"Capacity of vector : "<< v.capacity() << endl;
for (int i : v){
    cout << i <<" " ;
}cout << endl;
v.pop_back();
cout << "Value after pop : ";
for (int i : v){
    cout << i <<" " ;
}cout << endl;
cout << "First element :"<<v.front() <<endl ;
cout << "Last element :"<< v.back () << endl;
    return 0;
}