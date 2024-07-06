#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <string>
#include "DataValidInput.cpp"
#include "Product.cpp"

class ProductRepository{
    virtual void addProduct(int id, std::string name, int type, int price) = 0;
    virtual void viewProduct()=0;
    virtual void updateProduct(int id) = 0;
    virtual void deleteProduct(int id) = 0;

};
