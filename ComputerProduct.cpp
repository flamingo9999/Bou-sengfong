#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <stdexcept>
#include "Product.cpp"

class ComputerProduct : public Product {
    public:
    ComputerProduct(int id, const string& name, int price){
        this->id=id;
        this->name=name;
        this->price=price;
    }
    std::string getType() const override{
        return "Computer Product list";
    }
};