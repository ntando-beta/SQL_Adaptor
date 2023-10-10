#pragma once
#include "ORM.h"
#include "SQLSelect.h"

class DatabaseSelect : public ORM{
public:
    DatabaseSelect();
    void executeQuery(const std::string& query) override;
};