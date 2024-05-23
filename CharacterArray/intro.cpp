#include<iostream>
using namespace std;
void reverse(char name[],int n){
    int s = 0 ;
    int e = n - 1;
    while(s<e){
        swap(name[s++] , name[e--]);
    }
    }
int getChar(char name[]){
    int count = 0;
    for(int i = 0 ; name[i] != '\0' ; i++){
        count++;
    }
    return count;
}
int main(){
char name[20];
cout << "Enter Your Name : " << endl;
cin >> name;
// name[2] = '\0';
cout << "Your name is ";
cout << name <<endl;
int len = getChar(name);
cout << "Length of string is : " << len << endl ;

reverse(name,len);
cout <<"Reverse is : " << name;
    return 0;
}