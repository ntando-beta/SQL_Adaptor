#include "SQLSelect.h"

SQLSelect::SQLSelect(const std::string& from, const std::string& select) : from_(from), select_(select) {}

std::string SQLSelect::generateQuery() const {
    return "SELECT " + select_ + " FROM " + from_;
}
