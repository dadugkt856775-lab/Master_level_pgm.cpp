#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int marks;
};

int main() {
    vector<Student> students = {
        {"Aman", 80},
        {"Rahul", 90},
        {"Kiran", 80},
        {"Arjun", 70},
        {"Sameer", 90}
    };

    stable_sort(students.begin(), students.end(),
        [](const Student& a, const Student& b) {
            return a.marks > b.marks;
        });

    cout << "Students by marks:\n";

    for (const auto& s : students)
        cout << s.name << " - " << s.marks << endl;

    return 0;
}
