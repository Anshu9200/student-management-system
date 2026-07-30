#include "student.h"

void Student::addStudent() {
    int studentId;
    string studentName;
    float studentMarks;

    cout << "\nEnter Student ID: ";
    cin >> studentId;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, studentName);

    cout << "Enter Student Marks: ";
    cin >> studentMarks;

    id.push_back(studentId);
    name.push_back(studentName);
    marks.push_back(studentMarks);

    cout << "\nStudent added successfully!\n";
}

void Student::displayStudents() {
    if(id.empty()) {
        cout << "\nNo student records found.\n";
        return;
    }

    cout << "\nStudent Records\n";
    cout << "-------------------------\n";

    for(size_t i = 0; i < id.size(); i++) {
        cout << "ID: " << id[i]
             << "\nName: " << name[i]
             << "\nMarks: " << marks[i]
             << "\n-------------------------\n";
    }
}

void Student::searchStudent() {
    int studentId;

    cout << "\nEnter Student ID to search: ";
    cin >> studentId;

    for(size_t i = 0; i < id.size(); i++) {
        if(id[i] == studentId) {
            cout << "\nStudent Found\n";
            cout << "Name: " << name[i] << endl;
            cout << "Marks: " << marks[i] << endl;
            return;
        }
    }

    cout << "\nStudent not found.\n";
}

void Student::updateStudent() {
    int studentId;

    cout << "\nEnter Student ID to update: ";
    cin >> studentId;

    for(size_t i = 0; i < id.size(); i++) {
        if(id[i] == studentId) {

            cin.ignore();

            cout << "Enter New Name: ";
            getline(cin, name[i]);

            cout << "Enter New Marks: ";
            cin >> marks[i];

            cout << "\nStudent updated successfully!\n";
            return;
        }
    }

    cout << "\nStudent not found.\n";
}

void Student::deleteStudent() {
    int studentId;

    cout << "\nEnter Student ID to delete: ";
    cin >> studentId;

    for(size_t i = 0; i < id.size(); i++) {
        if(id[i] == studentId) {

            id.erase(id.begin() + i);
            name.erase(name.begin() + i);
            marks.erase(marks.begin() + i);

            cout << "\nStudent deleted successfully!\n";
            return;
        }
    }

    cout << "\nStudent not found.\n";
}
