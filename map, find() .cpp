#include <map>
#include <string>
#include <iostream>

using namespace std;

int main () {
    string studentName;
    double studentGrade;

    map<string, double> studentGrades;
    map<string, double>:: iterator iterator1;
    // Students' grades (pre-entered)
    studentGrades.emplace("Harry Rawlins", 84.3);
    studentGrades.emplace("Stephanie Kong", 91.0);
    studentGrades.emplace("Shailen Tennyson", 78.6);
    studentGrades.emplace("Quincy Wraight", 65.4);
    studentGrades.emplace("Janine Antinori", 98.2);

    // TODO: Read in new grade for a student, output initial
    //       grade, replace with new grade in map,
    //       output new grade

    getline(cin, studentName);
    iterator1 = studentGrades.find(studentName);
    for (const pair<string, double>& student : studentGrades) {
        if (student.first == studentName) {
            cout << studentName << "'s original grade: " << student.second << endl;

            cin >> studentGrade;

            // Update the grade in the map
            studentGrades[studentName] = studentGrade;

            cout << studentName << "'s new grade: " << studentGrade << endl;
        }
    }

    return 0;
}

