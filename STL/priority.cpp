#include<iostream>
#include<queue>
using namespace std ;

int main (){
// max heap
priority_queue<int> maxi;

priority_queue<int , vector<int>,greater<int> > mini;
maxi.push(2);
maxi.push(1);
maxi.push(3);
maxi.push(4);
int n = maxi.size();
cout << "size of queue : " << maxi.size() << endl; 
for (int i = 0 ;i<n;i++){
    cout<<maxi.top()<< " ";
    maxi.pop();
}cout << endl;

mini.push(2);
mini.push(1);
mini.push(3);
mini.push(4);
int m = mini.size();
cout << "size of queue : " << mini.size() << endl; 
for (int i = 0 ;i<m;i++){
    cout<<mini.top()<< " ";
    mini.pop();
}cout << endl;
    return 0;
}