#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPrime(int n) {
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main() {
    vector<int> v = {2, 7, 10, 13, 18, 19, 21, 23};
    vector<int> primes;

    copy_if(v.begin(), v.end(), back_inserter(primes), isPrime);

    cout << "Prime numbers: ";

    for (int x : primes)
        cout << x << " ";

    return 0;
}
