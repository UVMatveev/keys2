#pragma once
#include "Animal.h"

class Dog : public Animal {
public:
    Dog(const std::string& name);
    void makeSound() override;
    void eat() override;
    void fetch();
}; 