#include<iostream>
#include <list>
using namespace std;
int main (){
list <int> a;

a.push_back(1);
a.push_front(3);
for(int i : a){
    cout << i <<" " ;
}cout << endl;
cout << "before erase : " << a.size()<<endl;
a.erase(a.begin());
cout << "after erase : "<<a.size()<< endl;
    return 0;
}