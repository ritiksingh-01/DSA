#include <iostream>
using namespace std;

string replaceSpace(string str) {
    string temp = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        } else {
            temp.push_back(str[i]);
        }
    }
    return temp;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << endl;
    cout << "Modified string: " << replaceSpace(s) << endl;
    return 0;
}
