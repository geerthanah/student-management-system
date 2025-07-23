#include "../include/StudentManager.h"
#include <iostream>
#include <fstream>
#include <sstream>

StudentManager::StudentManager() {
    loadFromFile();
}

void StudentManager::addStudent(const Student& student) {
    students.push_back(student);
    saveToFile();
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
            saveToFile();
            std::cout << "Student deleted.\n";
            return;
        }
    }
    std::cout << "Student not found.\n";
}

void StudentManager::loadFromFile() {
    std::ifstream file(filename);
    if (!file.is_open()) return;

    std::string line;
    while (getline(file, line)) {
        std::stringstream ss(line);
        std::string idStr, name, ageStr;

        getline(ss, idStr, ',');
        getline(ss, name, ',');
        getline(ss, ageStr, ',');

        int id = std::stoi(idStr);
        int age = std::stoi(ageStr);
        students.emplace_back(id, name, age);
    }
    file.close();
}

void StudentManager::saveToFile() const {
    std::ofstream file(filename);
    for (const auto& student : students) {
        file << student.getId() << "," << student.getName() << "," << student.getAge() << "\n";
    }
    file.close();
}
