#if !defined(SQLSELECT_H)
#define SQLSELECT_H

#include <string>

class SQLSelect {
public:
    SQLSelect(const std::string& from, const std::string& select);
    virtual std::string generateQuery() const;

protected:
    std::string from_;
    std::string select_;
};

#endif // SQLSELECT_H
