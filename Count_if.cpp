#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {12, 7, 4, 9, 16, 21, 8};

    int even = count_if(v.begin(), v.end(), [](int x) {
        return x % 2 == 0;
    });

    cout << "Even numbers = " << even;

    return 0;
}
