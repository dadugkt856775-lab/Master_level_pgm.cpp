#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {-8, -5, -2, 6, -9};

    bool found = any_of(v.begin(), v.end(), [](int x) {
        return x > 0;
    });

    if (found)
        cout << "At least one positive number exists";
    else
        cout << "No positive number exists";

    return 0;
}
