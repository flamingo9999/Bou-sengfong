#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <stdexcept>
#include "Staff.cpp"

class FullTimeStaff : public Staff {
    public:
    FullTimeStaff(int id, const string& name, string address){
        this->id=id;
        this->name=name;
        this->address=address;
    }
    std::string getType() const override{
        return "Full Time Staff";
    }
};