#include <iostream>
using namespace std ;
int search (int arr[], int size , int key){

for (int i = 0 ;i< size ;i++){
    if (arr[i]==key){
        return 1 ;
    }
}
return 0;
}
int main (){

int arr [] =  {10 , 50 , 30 , 70 , 80 , 20 , 90 , 40};

int key ; 
cout << "Enter the element to be searched :" << endl;
cin >> key ;
int found = search(arr , 8 , key);
if (found){
    cout << "Element Found "<< endl ;
}
else {
    cout << "Not found "<< endl;
}
    return 0;
}