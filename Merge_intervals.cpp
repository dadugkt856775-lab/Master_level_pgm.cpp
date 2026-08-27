#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<pair<int, int>> intervals = {
        {1, 3},
        {2, 6},
        {8, 10},
        {9, 12}
    };

    sort(intervals.begin(), intervals.end());

    vector<pair<int, int>> result;

    for (auto interval : intervals) {

        if (result.empty() ||
            result.back().second < interval.first) {

            result.push_back(interval);

        } else {

            result.back().second =
                max(result.back().second, interval.second);
        }
    }

    cout << "Merged intervals:\n";

    for (auto x : result)
        cout << "[" << x.first << ", "
             << x.second << "]\n";

    return 0;
}
