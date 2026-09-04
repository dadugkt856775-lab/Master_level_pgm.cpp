#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> marks = {78, 85, 91, 67, 88};

    bool valid = all_of(marks.begin(), marks.end(), [](int x) {
        return x >= 0 && x <= 100;
    });

    if (valid)
        cout << "All marks are valid";
    else
        cout << "Invalid marks found";

    return 0;
}
