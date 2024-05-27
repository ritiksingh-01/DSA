#include<iostream>
using namespace std;
string removeOccurrence(string s , string part){
    while(s.length() != 0 && s.find(part) < s.length()){
        s.erase(s.find(part) , part.length());
    }
    return s ;
}
int main(){
string s = "daabcbaabcbc";
string part = "abc";
cout << "After removing all occurrence of substring: " << removeOccurrence(s,part);
    return 0;
}