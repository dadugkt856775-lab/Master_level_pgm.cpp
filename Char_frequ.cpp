#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s = "programming";

    unordered_map<char, int> freq;

    for (char ch : s)
        freq[ch]++;

    vector<pair<char, int>> v;

    for (auto x : freq)
        v.push_back({x.first, x.second});

    sort(v.begin(), v.end(),
         [](pair<char, int> a, pair<char, int> b) {
             return a.second > b.second;
         });

    cout << "Characters by frequency:\n";

    for (auto x : v)
        cout << x.first << " -> " << x.second << endl;

    return 0;
}
