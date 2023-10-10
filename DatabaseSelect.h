#if !defined(DATABASESELECT_H)
#define DATABASESELECT_H

#include "ORM.h"

class DatabaseSelect : public ORM{
public:
    DatabaseSelect();
    void executeQuery(const std::string& query);
};

#include "DatabaseSelect.cpp"

#endif // DATABASESELECT_H

