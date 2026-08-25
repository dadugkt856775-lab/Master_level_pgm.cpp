#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int marks;
};

bool compareStudents(Student a, Student b) {
    return a.marks > b.marks;
}

int main() {

    vector<Student> students;

    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Input students
    for (int i = 0; i < n; i++) {

        Student s;

        cout << "\nEnter student " << i + 1 << " name: ";
        cin >> s.name;

        cout << "Enter marks: ";
        cin >> s.marks;

        students.push_back(s);
    }

    // Sort students by marks
    sort(students.begin(), students.end(), compareStudents);

    cout << "\n===== STUDENT RANKING =====\n";

    int rank = 1;

    for (auto s : students) {

        cout << "Rank " << rank << ": "
             << s.name << " - "
             << s.marks << endl;

        rank++;
    }

    // Find highest marks
    cout << "\n===== TOPPER =====\n";

    cout << "Name: " << students[0].name << endl;
    cout << "Marks: " << students[0].marks << endl;

    // Calculate average
    int total = 0;

    for (auto s : students) {
        total += s.marks;
    }

    double average = (double)total / n;

    cout << "\nAverage Marks = " << average << endl;

    // Count students above average
    int aboveAverage = 0;

    for (auto s : students) {

        if (s.marks > average) {
            aboveAverage++;
        }
    }

    cout << "Students above average = "
         << aboveAverage << endl;

    return 0;
}
