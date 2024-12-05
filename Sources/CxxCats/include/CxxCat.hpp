#pragma once

#include <list>

class Cat {
public:
    Cat() {}
    Cat(const Cat & other) = delete;
    Cat(Cat && other) = default;
    ~Cat() {}
    Cat& operator=(const Cat & other) = delete;
    Cat& operator=(Cat && other) noexcept = default;
};

class House {
public:
    House() {}

    std::list<Cat> cats;
};
