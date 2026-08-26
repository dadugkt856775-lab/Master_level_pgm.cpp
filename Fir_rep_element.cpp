#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> v = {10, 5, 3, 4, 3, 5, 6};

    unordered_set<int> seen;

    for (int x : v) {
        if (seen.count(x)) {
            cout << "First repeating element = " << x;
            return 0;
        }

        seen.insert(x);
    }

    cout << "No repeating element";

    return 0;
}
