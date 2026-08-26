#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a = {1, 3, 5, 7};
    vector<int> b = {2, 4, 6, 8};

    vector<int> result;

    merge(a.begin(), a.end(),
          b.begin(), b.end(),
          back_inserter(result));

    cout << "Merged vector: ";

    for (int x : result)
        cout << x << " ";

    return 0;
}
