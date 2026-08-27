#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main() {
    vector<int> v = {1, 3, -1, -3, 5, 3, 6, 7};

    int k = 3;

    deque<int> dq;

    cout << "Maximum of every window: ";

    for (int i = 0; i < v.size(); i++) {

        while (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        while (!dq.empty() && v[dq.back()] <= v[i])
            dq.pop_back();

        dq.push_back(i);

        if (i >= k - 1)
            cout << v[dq.front()] << " ";
    }

    return 0;
}
