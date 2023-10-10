#if !defined(ORM_H)
#define ORM_H
#include <iostream>
#include <string>
#include "Database.h"

class ORM {
public:
    virtual void executeQuery(const std::string& query) = 0;
protected:
    Database connection = Database();
};

#endif // ORM_H
