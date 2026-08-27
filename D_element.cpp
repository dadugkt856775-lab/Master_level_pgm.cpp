#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 2, 5, 3, 6, 1};

    unordered_set<int> seen;
    unordered_set<int> duplicate;

    for (int x : v) {
        if (seen.count(x))
            duplicate.insert(x);
        else
            seen.insert(x);
    }

    cout << "Duplicate elements: ";

    for (int x : duplicate)
        cout << x << " ";

    return 0;
}
