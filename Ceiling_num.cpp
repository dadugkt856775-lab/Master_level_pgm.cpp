#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40, 50};

    int x = 35;

    auto ceilIt = s.lower_bound(x);

    cout << "Ceiling = ";

    if (ceilIt != s.end())
        cout << *ceilIt << endl;
    else
        cout << "Does not exist\n";

    auto floorIt = s.upper_bound(x);

    cout << "Floor = ";

    if (floorIt != s.begin()) {
        --floorIt;
        cout << *floorIt;
    } else {
        cout << "Does not exist";
    }

    return 0;
}
