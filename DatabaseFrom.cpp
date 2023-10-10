#include "DatabaseFrom.h"
#include <iostream>

#include "DatabaseFrom.h"
#include "Database.cpp"

DatabaseFrom::DatabaseFrom() {}

void DatabaseFrom::executeQuery(const std::string& query) {
    std::cout << "Executing SQL query for FROM-based database: " << query << std::endl;
    connection.executeQuery(query);
    // Execute the query for a database that starts with "FROM"
}
