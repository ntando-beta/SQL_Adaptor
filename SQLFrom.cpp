#include "SQLFrom.h"

SQLFrom::SQLFrom(const std::string& from, const std::string& select) : from_(from), select_(select) {}

std::string SQLFrom::generateQuery() const {
    return "FROM " + from_ + " SELECT " + select_;
}
