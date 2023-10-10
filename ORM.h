#if !defined(ORM_H)
#define ORM_H
#include <iostream>
#include <string>

class ORM {
public:
    void executeQuery(const std::string& query);
};

#endif // ORM_H
