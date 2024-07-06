#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <string>
#include "DataValidInput.cpp"
#include "Staff.cpp"

class StaffRepository{
    virtual void addStaff(int id, std::string name, int type,std::string address) = 0;
    virtual void viewStaff()=0;
    virtual void updateStaff(int id) = 0;
    virtual void deleteStaff(int id) = 0;

};