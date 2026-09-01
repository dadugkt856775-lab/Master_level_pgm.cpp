#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s = "programming";

    sort(s.begin(), s.end());

    cout << "Sorted string = " << s;

    return 0;
}
