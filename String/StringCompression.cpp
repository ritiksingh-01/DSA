#include <iostream>
#include <vector>
using namespace std;

int compress(vector<string>& chars) {
    int n = chars.size();
    int ansIndex = 0;

    for (int i = 0; i < n; i++) {
        int j = i + 1;
        while (j < n && chars[i] == chars[j]) {
            j++;
        }


        chars[ansIndex++] = chars[i];

        int count = j - i;
        if (count > 1) {
            string cnt = to_string(count);
            for (char ch : cnt) {
                chars[ansIndex++] = ch;
            }
        }
        i = j;
    }
    return ansIndex;
}

int main() {
    vector<string> chars = {"a", "a", "b", "b", "c", "c", "c"};
    int result = compress(chars);
    for (int i = 0; i < result; i++) {
        cout << chars[i] << " ";
    }
    return 0;
}
