#include <iostream>
#include "student.h"

using namespace std;

int main() {
    Student s;
    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                s.addStudent();
                break;
            case 2:
                s.displayStudents();
                break;
            case 3:
                s.searchStudent();
                break;
            case 4:
                s.updateStudent();
                break;
            case 5:
                s.deleteStudent();
                break;
            case 6:
                cout << "Thank you!\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 6);

    return 0;
}
