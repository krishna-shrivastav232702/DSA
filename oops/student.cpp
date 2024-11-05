#include <iostream>
#include <string>
using namespace std;
class Student {
    int studentID;
    string name;
    float marks[6];  
    float average;
public:
    Student(int id = 0, string n = "") : studentID(id), name(n), average(0.0) {}
    void inputDetails() {
        cout << "Enter Student ID: ";
        cin >> studentID;
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter marks for 6 courses: " << endl;
        for (int i = 0; i < 6; i++) {
            do {
                cout << "Mark for course " << (i + 1) << ": ";
                cin >> marks[i];
                } while (marks[i] < 0 || marks[i] > 100);
        }
    }
    void calculateAverage() {
        float total = 0;
        for (int i = 0; i < 6; i++) {
            total += marks[i];
        }
        average = total / 6;
    }
    float getAverage() const {
        return average;
    }
    void displayDetails() const {
        cout << "Student ID: " << studentID << endl;
        cout << "Student Name: " << name << endl;
        cout << "Average Marks: " << average << endl;
    }
};

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    Student students[100];
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter details for student " << (i + 1) << ": " << endl;
        students[i].inputDetails();
        students[i].calculateAverage();
    }
    int topperIndex = 0;
    for (int i = 1; i < numStudents; i++) {
        if (students[i].getAverage() > students[topperIndex].getAverage()) {
            topperIndex = i;
        }
    }
    cout << "\nTopper Details: " << endl;
    students[topperIndex].displayDetails();

    return 0;
}