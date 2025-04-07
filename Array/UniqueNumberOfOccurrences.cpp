#include <iostream>
#include <vector>
#include <map>

using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    map<int, int> occurrenceMap;

    for (int num : arr) {
        occurrenceMap[num]++;
    }

    map<int, bool> countMap;
    for (const auto& pair : occurrenceMap) {
        int count = pair.second;
        if (countMap[count]) {
            return false;
        }
        countMap[count] = true;
    }

    return true;
}

int main() {
    vector<int> arr = {1, 2, 2, 1, 1, 3};
    if (uniqueOccurrences(arr)) {
        cout << "The number of occurrences of each element is unique." << endl;
    } else {
        cout << "The number of occurrences of each element is not unique." << endl;
    }

    return 0;
}