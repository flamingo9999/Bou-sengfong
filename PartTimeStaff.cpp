#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <stdexcept>
#include "Staff.cpp"

class PartTimeStaff : public Staff {
    public:
        PartTimeStaff(int id, std::string name,std::string address){
            this->id=id;
            this->name=name;
            this->address=address;
        }
        std::string getType() const override{
            return "Part Time Staff";
        }
};