#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int marks;
};

bool compare(Student a, Student b) {
    return a.marks > b.marks;
}

int main() {
    vector<Student> students = {
        {"Rahul", 85},
        {"Aman", 95},
        {"Kiran", 78},
        {"Arun", 90}
    };

    sort(students.begin(), students.end(), compare);

    cout << "Student Ranking:\n";

    for (int i = 0; i < students.size(); i++) {
        cout << i + 1 << ". "
             << students[i].name << " - "
             << students[i].marks << endl;
    }

    return 0;
}
