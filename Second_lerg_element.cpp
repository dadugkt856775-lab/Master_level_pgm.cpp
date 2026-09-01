#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 40, 20, 50, 30, 50};

    set<int> s;

    for (int x : v)
        s.insert(x);

    if (s.size() < 2) {
        cout << "Second largest does not exist";
        return 0;
    }

    auto it = s.rbegin();
    ++it;

    cout << "Second largest = " << *it;

    return 0;
}
