#include <iostream>
#include <map>
using namespace std ;

int main (){
map <int,string> m;
m[1] = "ritik";
m[2] = "love";
m[12] = "Priyanshi";

m.insert({3,"Rishi"});
cout <<"Before erase :"<<endl;
for (auto i : m){
    cout << i.first<<" " << i.second<<endl;
}
cout <<"is 12 present : "<<m.count(12)<<endl;
cout <<"after erase :"<<endl;
m.erase(3);
for (auto i : m){
    cout << i.first<<" " << i.second<<endl;
}

auto it = m.find(2);
for (auto i = it ; i!=m.end();i++){
    cout<<(*i).first<<" "<<(*i).second<<endl;
}
 it = m.find(3);
for (auto i = it ; i!=m.end();i++){
    cout<<(*i).first<<" "<<(*i).second<<endl;
}
    return 0;
}