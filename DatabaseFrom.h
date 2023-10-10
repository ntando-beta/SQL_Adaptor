#if !defined(DATABASEFROM_H)
#define DATABASEFROM_H


#include "ORM.h"
#include "SQLSelect.h"

class DatabaseFrom : public ORM{
public:
    DatabaseFrom();
    void executeQuery(const std::string& query);
};

#include "DatabaseFrom.cpp"
#endif