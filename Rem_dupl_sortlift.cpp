#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 1, 2, 2, 3, 3, 4, 5, 5};

    auto it = unique(v.begin(), v.end());

    v.erase(it, v.end());

    cout << "After removing duplicates: ";

    for (int x : v)
        cout << x << " ";

    return 0;
}
