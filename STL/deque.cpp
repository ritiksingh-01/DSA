#include <iostream>
#include <deque>
using namespace std ;

int main (){
deque<int> a;

a.push_back(1);
a.push_front(2);
for (int i : a){
    cout << i ;
}cout<<endl;
// // a.pop_back();
// a.pop_front();
// for (int i : a){
//     cout << i;
// }

cout << "Print the first element at first index : " << a.at(0)<< endl;
cout << "Front : " <<a.front() << endl;
cout << "Back :" << a.back() << endl;
cout << "Empty :" << a.empty() << endl;

cout << "Size Before : " << a.size() << endl ;
a.erase(a.begin(), a.begin()+1) ;
cout << "Size after : " << a.size() << endl;
    return 0;
}