#include "DatabaseSelect.h"
#include <iostream>

DatabaseSelect::DatabaseSelect(){}

void DatabaseSelect::executeQuery(const std::string& query) {
    std::cout << "Executing SQL query for SELECT-based database: " << query << std::endl;
    connection.executeQuery(query);
    // Execute the query for a database that starts with "SELECT"
}
