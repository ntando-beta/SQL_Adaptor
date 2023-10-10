#include "Adapter.h"
#include "ORM.cpp"
#include <iostream>

int main() {
    // Example usage of Adapter
    SQLSelect* adapter = new Adapter("table_name", "*");
    std::string query = adapter->generateQuery();

    ORM* orm = new ORM();
    orm->executeQuery(query);
    return 0;
}
