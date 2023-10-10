#if !defined(DATABASE)
#define DATABASE
#include <vector>
#include "User.h"

class Database {
public:
    Database();
    void executeQuery(const std::string& query);

private:
    std::vector<User> users_;
};

#endif // DATABASE
