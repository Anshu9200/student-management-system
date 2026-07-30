#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student {
private:
    vector<int> id;
    vector<string> name;
    vector<float> marks;

public:
    void addStudent();
    void displayStudents();
    void searchStudent();
    void updateStudent();
    void deleteStudent();
};

#endif
