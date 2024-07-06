#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdexcept>
#include "ProductManager.cpp"
#include "DataValidInput.cpp"
#include "Product.cpp"

class ProductApplication {
private:
    ProductManager manager;
public:
    void run(){

        int choice;
        bool done = false;
        do {
         displayProductManagement();
            choice = DataValidInput::getIntInput(">>> ");
            try {
                switch (choice)
                {
                case 1: {
                    int id;
                    std::string name;
                    int type;
                    int price;
                    
                    id = DataValidInput::getIntInput("Enter Product ID: ");
                    name = DataValidInput::getStringInput("Enter Product Name: ");
                    type = DataValidInput::getIntInput("Enter 1 for Computer and 2 for Accessories product: ");
                    if (type != 1 && type != 2) {
                        throw std::invalid_argument(" Invalid Product Type!");
                    }
                    price = DataValidInput::getIntInput("Enter Product Price: ");
                    manager.addProduct(id, name, type, price);
                    break;
                }
                case 2: {
                    int id;
                    id = DataValidInput::getIntInput("Enter Product ID: ");
                    DataValidInput::validateId(id);
                    manager.updateProduct(id);
                    break;
                }
                case 3:
                    manager.viewProduct();
                    break;
                    
                case 4: {
                    int id;
                    id = DataValidInput::getIntInput("Enter Product ID: ");
                    DataValidInput::validateId(id);
                    manager.deleteProduct(id);
                    break;
                }
                case 5:
                    done = true;
                    break;
                default:
                    std::cout << "Invalide choice. Please try again.\n";
                }
            } catch (const std::exception& e) {
                std::cout << "Error!" << e.what() << std::endl;
            }
        } while (choice != 5);
    }
};
