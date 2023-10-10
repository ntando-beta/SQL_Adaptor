#include "Adapter.h"
#include "DatabaseFrom.h"
#include "DatabaseSelect.h"
#include <iostream>

using namespace std;

int main() {
    // Example usage of Adapter
    SQLSelect* adapter = new Adapter("users", "*");
    std::string query1 = adapter->generateQuery();

    ORM* orm = new DatabaseFrom();
    orm->executeQuery(query1);
    cout << endl;
    // Example usage of no Adapter
    SQLSelect* target = new SQLSelect("users", "*");
    std::string query2 = target->generateQuery();

    ORM* orm2 = new DatabaseSelect();
    orm2->executeQuery(query2);
    return 0;
}
