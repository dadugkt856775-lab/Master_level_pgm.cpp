#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    vector<int> v = {10, 40, 20, 50, 30, 60};

    int k = 3;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int x : v) {
        pq.push(x);

        if (pq.size() > k)
            pq.pop();
    }

    cout << "Kth largest element = " << pq.top();

    return 0;
}
