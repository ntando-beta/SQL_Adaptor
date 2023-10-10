#if !defined(USER_H)
#define USER_H

class User {
public:
    User(const std::string& name, int age);
    std::string getName() const;
    int getAge() const;

private:
    std::string name_;
    int age_;
};

#include "User.cpp"

#endif // USER_H

#include <string>

