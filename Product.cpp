#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdexcept>
#include <iomanip>
using namespace std;

class Product {
protected:
    std::string name;
    int id;
    int price;
public:
    Product(){}
    Product(int id, int price, std::string name):id(id),name(name),price(price){}
    //getter
    int getId(){
        return id;
    }
    int getPrice(){
        return price;
    }
    std::string getName(){
        return name;
    }
    //setter
    void setId(int id){
        this->id=id;
    }
    void setPrice(int price){
        this->price=price;
    }
    void setName(std::string name){
        this->name=name;
    }
    virtual std::string getType() const = 0;

   virtual void displayname() const {
        
        std::cout << std::left << std::setw(20) << getType()
                  << std::setw(20) << id
                  << std::setw(15) << name
                  << std::setw(15) << price <<endl;
    }
    virtual ~Product() = default;
};
