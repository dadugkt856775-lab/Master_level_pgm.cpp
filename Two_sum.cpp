#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> v = {2, 7, 11, 15};
    int target = 9;

    unordered_map<int, int> mp;

    for (int i = 0; i < v.size(); i++) {
        int required = target - v[i];

        if (mp.find(required) != mp.end()) {
            cout << "Indices: " << mp[required] << " " << i;
            return 0;
        }

        mp[v[i]] = i;
    }

    cout << "No pair found";

    return 0;
}
