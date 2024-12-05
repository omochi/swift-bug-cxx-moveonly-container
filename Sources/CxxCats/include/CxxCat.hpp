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
    House(const House & other) = delete;
    House(House && other) = default;
    ~House() {}
    House& operator=(const House & other) = delete;
    House& operator=(House && other) noexcept = default;

    std::list<Cat> cats;
};
