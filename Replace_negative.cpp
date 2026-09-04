#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, -5, 8, -3, 7, -9, 12};

    replace_if(v.begin(), v.end(), [](int x) {
        return x < 0;
    }, 0);

    cout << "Updated array: ";

    for (int x : v)
        cout << x << " ";

    return 0;
}
