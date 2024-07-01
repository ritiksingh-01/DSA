#include<iostream>
using namespace std;
void update(int **p ){
    // p = p + 1;
    // *p = *p + 1;
    **p = **p + 1;

}
int main(){
    /*
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

 float a = 12.5;
 float b = 14.5;
 float *ptr = &a;
 (*ptr)++;
 *ptr = b;
 cout << *ptr << " " << a << " " << b ;
 

int arr[] = {11,44,55,33};
cout << *(arr) << " "  << *(arr+3) ;


int arr[] = {11,44,55,33};
int *ptr = arr;
(*ptr)++;
cout << *ptr ;

char arr[] = "abcd";
char *ptr = &arr[0];
cout << ptr ;


char arr[] = "abcd";
char *ptr = &arr[0];
ptr++;
cout << ptr ;
*/

int a = 110;
int *ptr = &a;
int **q = &ptr;
int b = (**q)++ + 9;
cout << a << " " << b; 

    return 0;
}