#include <iostream>
using namespace std;

int main (){
// pattern 

int n ,i = 1 ; 

cin >> n;

// while (i <= n){
//     int j = 1;
//     while (j <= n){
//         cout << i;
//         j++;
//     }
//     cout << endl;
//     i++;
// }

//  123 pattern

// while (i <= n){
//     int j = 1;
//     while (j <= n){
//         cout << j ;
//         j++;
//     }
//     cout << endl;
//     i++;
// }

//  reverse of 1234 pattern

// while (i <= n){
//     int j = 1;
//     while (j <= n){
//         int a = n-j+1;
//         cout << a ;
//         j++;
//     }
//     cout << endl;
//     i++;
// }
 
// 123
// 456
// 789 pattern
// int a =1 ;
// while (i <= n){
//     int j = 1;
//     while (j <= n){
//         cout << a;
//         a++;
//         j++;
//     }
//     cout << endl;
//     i++;
// }

// *
// **
// ***
// **** pattern

// while (i <= n){
//     int j = 1;
//     while (j <= i){
//         cout << "*" ;
//         j++;
//     }
//     cout << endl;
//     i++;
// }

// 1	
// 2	3	
// 3	4	5	
// 4	5	6	7	

// while (i <= n){
//     int j = 1;
//     int a = i ;
//     while (j <= i){
//         cout << a <<"\t";
//         a++;
//         j++;
//     }
//     cout << endl;
//     i++;
// }

// 1	
// 2	1	
// 3	2	1	
// 4	3	2	1	

// while (i <= n){
//     int j = 1;
//     // int a = i ;
//     while (j <= i){
//         cout << i -j+1 <<"\t";
//         // a++;
//         j++;
//     }
//     cout << endl;
//     i++;
// }

//    *
//   **
//  ***
// ****

// while (i <= n){
//     int sp = n-i;
//     while (sp){
//         cout <<" ";
//         sp--;
//     }
//     int j = 1;
//     while (j <= i){
//         cout <<"*";
//         j++;
//     }
//     cout << endl;
//     i++;
// }


// ****
// ***
// **
// *

// while (i <= n){
//     int j = 1;
//     while (j <= n-i+1){
//         cout <<"*";
//         j++;
//     }
//     cout << endl;
//     i++;
// }


//    1
//   121
//  12321
// 1234321


while (i <= n){
    int sp = n-i ;
    while (sp){
        cout<<" ";
        sp--;
    }
    int j = 1;
    while (j <=i){
        cout << j;
        j++;
    }
    int k = i-1 ;
    // int a = j ;
    while (k){
        cout << k ;
        k--;
    }
    cout << endl;
    i++;
}

return 0 ;
}