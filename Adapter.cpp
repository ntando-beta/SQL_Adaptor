#include "Adapter.h"

Adapter::Adapter(const std::string& from, const std::string& select) : SQLSelect(from, select), SQLFrom(from, select) {}

std::string Adapter::generateQuery() const {
    return SQLFrom::generateQuery();  // Call Adaptee's generateQuery
}
