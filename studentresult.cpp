#include <iostream>
#include <string>
using namespace std;

// Base class
class Student {
protected:
    int rollNumber;
    string name;

public:
    void inputStudent() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cin.ignore(); 

        cout << "Enter Name: ";
        getline(cin, name);
    }

    void displayStudent() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
    }
};

// Derived class
class Result : public Student {
private:
    int marks[3];
    int total;
    float average;

public:
    void inputMarks() {
        cout << "Enter marks of 3 subjects: ";
        total = 0;
        for (int i = 0; i < 3; i++) {
            cin >> marks[i];
            total += marks[i];
        }
        average = total / 3.0;
    }

    void displayResult() {
        displayStudent();
        cout << "Marks: ";
        for (int i = 0; i < 3; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl;
    }
};

int main() {
    Result r;
    r.inputStudent();
    r.inputMarks();
    cout << "\n--- Student Result ---\n";
    r.displayResult();
    return 0;
}