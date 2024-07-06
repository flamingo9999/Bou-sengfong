#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdexcept>
#include <iomanip>
class Staff{
protected:
    std::string name, address;
    int id;
public:
    Staff(){}
    Staff(int id,std::string address,std::string name) :id(id),name(name),address(address){}
    //Getter methods
    int getId(){
        return id;
    }
    std::string getAddress(){
        return address;
    }
    std::string getName(){
        return name;
    }
    //Setter methods
    void setId(int id){
        this->id=id;
    }
    void setAddress(std::string address){
        this->address=address;
    }
    void setName(std::string name){
        this->name=name;
    }
    virtual std::string getType() const = 0;

 virtual void displayname() const {
        
        std::cout << std::left << std::setw(20) << getType()
                  << std::setw(20) << id
                  << std::setw(15) << name
                  << std::setw(15) << address << std::endl;
    }

    virtual ~Staff() = default;

};