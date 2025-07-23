#ifndef STUDENT_MANAGER_H
#define STUDENT_MANAGER_H

#include "Student.h"
#include <vector>
#include <string>

class StudentManager {
private:
    std::vector<Student> students;
    std::string filename = "data/students.txt";

    void loadFromFile();
    void saveToFile() const;

public:
    StudentManager();
    void addStudent(const Student& student);
    void displayAll() const;
    void searchById(int id) const;
    void deleteById(int id);
};

#endif
