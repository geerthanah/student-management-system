#ifndef STUDENT_MANAGER_H
#define STUDENT_MANAGER_H

#include "Student.h"
#include <vector>

class StudentManager {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student);
    void displayAll() const;
    void searchById(int id) const;
    void deleteById(int id);
};

#endif
