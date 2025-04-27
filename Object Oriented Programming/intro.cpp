#include<bits/stdc++.h>
using namespace std;

//class

class Student{
    public:
    string name ;
    int age , roll_no ;
    string grade ;

    public :
    void setName(string str){
        name = str;
    }
    void setAge(int age1){
        age = age1;
    }
    void setRoll(int  r){
        roll_no = r;
    }
    void setGrade(string g){
        grade = g;
    }

    void getName(){
        cout << name << endl;
    }
    void getAge(){
        cout << age << endl;
    }
    void getRoll(){
        cout << roll_no << endl;
    }
    void getGrade(){
        cout << grade << endl;
    }
};


int main(){
    Student s1 ; // object

    // s1.name = "Ritik";
    // s1.age = 21;
    // s1.roll_no = 36;
    // s1.grade = "A+";
    // s1.setName("Rishi");
    // s1.setAge(24);
    // s1.setRoll(36);
    // s1.setGrade("A++");

    // s1.getName();
    // s1.getAge();
    // s1.getRoll();
    // s1.getGrade();
     
    //  dynamic memory allocation 

    Student *s = new Student;
    (*s).name = "Rohit";
    (*s).age = 24;
    (*s).roll_no = 30;
    (*s).grade= "A+";
    cout << s-> name << endl;
}