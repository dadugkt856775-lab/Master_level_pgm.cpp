#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<string> words = {
        "cat", "apple", "dog", "banana",
        "sun", "computer", "pen"
    };

    map<int, vector<string>> groups;

    for (string word : words) {
        groups[word.length()].push_back(word);
    }

    for (auto group : groups) {
        cout << "Length " << group.first << ": ";

        for (string word : group.second)
            cout << word << " ";

        cout << endl;
    }

    return 0;
}
