#include "Database.h"
#include <iostream>

Database::Database() {
    // Populate the database with some example users
    users_.emplace_back("Alice", 30);
    users_.emplace_back("Bob", 25);
    users_.emplace_back("Charlie", 35);
}

void Database::executeQuery(const std::string& query) {
    if (query == "SELECT * FROM users") {
        std::cout << "Executing query: " << query << std::endl;
        for (const auto& user : users_) {
            std::cout << "User: " << user.getName() << ", Age: " << user.getAge() << std::endl;
        }
    }
    else if (query == "FROM users SELECT *") {
        std::cout << "Executing query: " << query << std::endl;
        for (const auto& user : users_) {
            std::cout << "User: " << user.getName() << ", Age: " << user.getAge() << std::endl;
        }
    } else {
        std::cout << "Unsupported query: " << query << std::endl;
    }
}
