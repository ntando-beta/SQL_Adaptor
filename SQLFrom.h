#if !defined(SQLFROM_H)
#define SQLFROM_H

#include <string>

class SQLFrom {
public:
    SQLFrom(const std::string& from, const std::string& select);
    virtual std::string generateQuery() const;

protected:
    std::string from_;
    std::string select_;
};

#endif // SQLFROM_H
