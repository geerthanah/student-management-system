#include "StudentManager.h"
#include <iostream>

void StudentManager::addStudent(const Student& student) {
    students.push_back(student);
    std::cout << "Student added successfully.\n";
}

void StudentManager::displayAll() const {
    std::cout << "\nAll Students:\n";
    for (const auto& student : students) {
        student.display();
    }
}

void StudentManager::searchById(int id) const {
    for (const auto& student : students) {
        if (student.getId() == id) {
            std::cout << "Student found:\n";
            student.display();
            return;
        }
    }
    std::cout << "Student not found.\n";
}

void StudentManager::deleteById(int id) {
    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->getId() == id) {
            students.erase(it);
            std::cout << "Student deleted.\n";
            return;
        }
    }
    std::cout << "Student not found.\n";
}
