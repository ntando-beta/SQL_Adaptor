#include "Adapter.h"
#include "DatabaseFrom.h"
#include "DatabaseSelect.h"
#include <iostream>

int main() {
    // Example usage of Adapter
    SQLSelect* adapter = new Adapter("table_name", "*");
    std::string query1 = adapter->generateQuery();

    ORM* orm = new DatabaseFrom();
    orm->executeQuery(query1);

    // Example usage of no Adapter
    SQLSelect* target = new SQLSelect("table_name", "*");
    std::string query2 = target->generateQuery();

    ORM* orm2 = new DatabaseSelect();
    orm2->executeQuery(query2);
    return 0;
}
