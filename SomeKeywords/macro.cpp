#include<iostream>
using namespace std;

#define PI 3.14  // marco is created
#define min(a,b) ((a) < (b) ? (a) : (b)) // function macro
int main(){

    // int r = 5;
    //  double pi = 3.14;
    // double area = PI * r * r ;
    // cout << "Area is : " << area << endl;

    int a = 50 ;
    int b = 80;
    cout << "Minimum element : " << min(a,b) << endl;

    return 0;
}