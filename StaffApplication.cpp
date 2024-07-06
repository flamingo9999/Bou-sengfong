#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdexcept>
#include "StaffManager.cpp"
#include "DataValidInput.cpp"
#include "display.cpp"

class StaffApplication {
private:
   
public:
    void run() {
        StaffManager manager;
        int choice;
        bool done = false;
        while (!done) {
            displayStaffManagement();
            choice = DataValidInput::getIntInput("Enter your choice: ");
            try {
                switch (choice)
                {
                case 1: {
                    int id;
                    std::string name;
                    int type;
                    std::string address;
                    id = DataValidInput::getIntInput("Enter Staff ID: ");
                    name = DataValidInput::getStringInput("Enter Staff Name:");
                    DataValidInput::validateId(id);
                    type = DataValidInput::getIntInput("Enter 1 for Full Time Staff and 2 for Part Time Staff :");
                    if (type != 1 && type != 2) {
                        throw std::invalid_argument("Invalid!");
                    }
                    address = DataValidInput::getAddressInput("Enter Staff Address: ");
                    manager.addStaff(id, name, type, address);
                    break;
                }
                case 2: {
                    int id;
                    id = DataValidInput::getIntInput("Enter Staff ID:");
                    DataValidInput::validateId(id);

                    manager.updateStaff(id);
                    break;
                }
                case 3:
                    manager.viewStaff();
                    break;
                case 4: {
                    int id;
                    id = DataValidInput::getIntInput("Enter Staff ID: ");
                    DataValidInput::validateId(id);
                    manager.deleteStaff(id);
                    break;
                }
                case 5:
                    done = true;
                    break;
                default:
                    std::cout << "Invalid. Please try again.\n";
                }
            } catch (const std::exception& e) {
                std::cout << "Error!" << e.what() << std::endl;
            }
        }
    }
};
