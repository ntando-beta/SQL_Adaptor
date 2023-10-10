#if !defined(ORM_H)
#define ORM_H
#include <iostream>
#include <string>

class ORM {
public:
    virtual void executeQuery(const std::string& query) = 0;
};

#endif // ORM_H
