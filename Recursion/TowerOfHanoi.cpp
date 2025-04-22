#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n , int sour , int help , int des){
    if(n==1) {
        cout << "Move disk " << n << " from " << sour << " to " << des  << endl;
        return;
    }

    towerOfHanoi(n-1 , sour , des , help);
    cout << "Move Disk " << n << " from " << sour << " to " << des << endl;
    towerOfHanoi(n-1 , help , sour , des);
}
int main(){

    int n = 3 ;
    int sour = 1  , help = 2 , des = 3;
    towerOfHanoi(n,sour,help,des);
    return 0;
}