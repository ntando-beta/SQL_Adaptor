#include "DatabaseFrom.h"
#include <iostream>

#include "DatabaseFrom.h"

DatabaseFrom::DatabaseFrom() {}

void DatabaseFrom::executeQuery(const std::string& query) {
    std::cout << "Executing SQL query for FROM-based database: " << query << std::endl;
    // Execute the query for a database that starts with "FROM"
}
