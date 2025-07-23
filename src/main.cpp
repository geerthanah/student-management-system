#include "../include/StudentManager.h"
#include <iostream>

int main() {
    StudentManager manager;
    int choice;

    while (true) {
        std::cout << "\n--- Student Management System ---\n";
        std::cout << "1. Add Student\n2. Display All\n3. Search by ID\n4. Delete by ID\n5. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if (choice == 1) {
            int id, age;
            std::string name;
            std::cout << "Enter ID: ";
            std::cin >> id;
            std::cin.ignore();
            std::cout << "Enter Name: ";
            getline(std::cin, name);
            std::cout << "Enter Age: ";
            std::cin >> age;
            manager.addStudent(Student(id, name, age));
        } else if (choice == 2) {
            manager.displayAll();
        } else if (choice == 3) {
            int id;
            std::cout << "Enter ID to search: ";
            std::cin >> id;
            manager.searchById(id);
        } else if (choice == 4) {
            int id;
            std::cout << "Enter ID to delete: ";
            std::cin >> id;
            manager.deleteById(id);
        } else if (choice == 5) {
            break;
        } else {
            std::cout << "Invalid choice!\n";
        }
    }

    return 0;
}
