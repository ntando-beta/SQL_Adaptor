#include "User.h"

User::User(const std::string& name, int age) : name_(name), age_(age) {}

std::string User::getName() const {
    return name_;
}

int User::getAge() const {
    return age_;
}
