#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;

int main (){
vector <int> v;
v.push_back(2);
v.push_back(4);
v.push_back(3);
cout << "Before sorting : ";
for (int i : v){
    cout << i << " ";
}cout<<endl;
cout <<"Is 4 is in list : "<<binary_search(v.begin(),v.end(),4)<<endl;
cout <<"Lower bound of 4 : "<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
cout <<"Upper bound of 4 : "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

// example 
int a =5 ,b=10,c=3;
cout <<"Max : " << max(a,b)<<endl;
cout <<"Min : " << min(a,c);
swap (a,b);
cout<< endl << "a :"<< a <<endl;

string abcd = "abcde";
reverse(abcd.begin(),abcd.end());
cout << abcd <<endl;

// sort is based on intro sort
// intro sort is a combination of three sort (heap , quick , insertion)
cout << "After sorting : ";
sort(v.begin(), v.end());
for (int i : v){
    cout << i << " ";
}
    return 0;
}