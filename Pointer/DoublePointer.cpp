#include<iostream>
using namespace std;
void update(int **p ){
    // p = p + 1;
    // *p = *p + 1;
    **p = **p + 1;

}
int main(){
    
    int a = 5;
    int * ptr = &a;
    // cout << ptr << endl;
    int **ptr1 =  &ptr;
    // cout << ptr1 ;

    cout << a << endl;
    cout << *ptr << endl;
    cout << **ptr1 << endl;


   cout << "Before " << a << endl;
   cout << "Before " << ptr << endl;
   cout << "Before " << ptr1 << endl;
   update(ptr1);
   cout << "after " << a << endl;
   cout << "after " << ptr << endl;
   cout << "after " << ptr1 << endl;    

   int a = 8 ;
   int b = 80;
   int *ptr = &b;
   *ptr = 9;
   cout << a << " " << b ;

  int a = 9 ;
  int *p = &a;
  int *q = p;
  (*q)++;
  cout << a ;

  int  a = 4 ;
  int *p = &a;
  cout << (*p)++ << " " << a;
  


    return 0;
}