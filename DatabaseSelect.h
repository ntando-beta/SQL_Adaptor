#pragma once
#include "ORM.h"

class DatabaseSelect : public ORM{
public:
    DatabaseSelect();
    void executeQuery(const std::string& query) override;
};
