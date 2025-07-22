#include "StudentManager.h"
#include <iostream>

void StudentManager::addStudent(const Student& student) {
    students.push_back(student);
    std::cout << "Student added successfully.\n";
}

