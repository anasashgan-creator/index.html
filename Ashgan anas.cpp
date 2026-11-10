#include <iostream>
#include <string>
using namespace std;

struct Student {
    string fullName;
    int age;
    string className;
    int yearOfStudy;
    float mathMark;
    float chemistryMark;
    float dsaMark;
    float average;
    float gpa;
};

int main() {

    Student students[3] = {
        {"Asgan anas", 20, "IT", 1, 85, 90, 80},
        
    };

    float totalAverage = 0;

    for (int i = 0; i < 3; i++) {

        students[i].average =
        (students[i].mathMark +
        students[i].chemistryMark +
        students[i].dsaMark) / 3;

        students[i].gpa = students[i].average * 4 / 100;

        totalAverage += students[i].average;

        cout << "\nStudent Number: " << i + 1 << endl;
        cout << "Full Name: " << students[i].fullName << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Class: " << students[i].className << endl;
        cout << "Year of Study: " << students[i].yearOfStudy << endl;
        cout << "Math Mark: " << students[i].mathMark << endl;
        cout << "Chemistry Mark: " << students[i].chemistryMark << endl;
        cout << "DSA Mark: " << students[i].dsaMark << endl;
        cout << "Average: " << students[i].average << endl;
        cout << "GPA: " << students[i].gpa << endl;

        cout << "----------------------" << endl;
    }

    cout << "Class Total Average: " << totalAverage / 3 << endl;

    return 0;
}