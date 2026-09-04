#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {5, 3, 8, 2, 10, 6, 15};

    int currentMax = v[0];

    cout << "Running maximum: ";

    for (int x : v) {
        currentMax = max(currentMax, x);
        cout << currentMax << " ";
    }

    return 0;
}
