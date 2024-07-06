
#pragma once
#include <iostream>
#include <iomanip>
#include "staff.cpp"
using namespace std;

 void displayStaff()  {
        std::cout << std::left << setw(20) <<"|Type"
                  << std::setw(20) << "ID"
                  << std::setw(15) << "Name"
                  << std::setw(20) << "Address   |" << std::endl;
        std::cout << "----------------------------------------------------------------" <<endl;
};
 void displayProduct() {
        std::cout << std::left << setw(20) <<"|Product Type"
                  << std::setw(20) << "ID"
                  << std::setw(15) << "Name"
                  << std::setw(15) << "Price" <<endl;
        std::cout << "--------------------------------------------------------------------------------" <<endl;
};

void displayMain(){
    std::cout <<"\n<<<<<<<<<<<<<<< Computer Shop Management System >>>>>>>>>>>>>>>>>>>>\n\n"
              <<"1. Product Management\n"
              <<"2. Staff Management\n"
              <<"3. Log out\n\n";
};
void displayProductManagement(){
    std::cout <<"\n<<<<<<<<<<<<<<<< Product Management >>>>>>>>>>>>>>>>>\n\n"
              <<"1. Add Product\n"
              <<"2. Update Product\n"
              <<"3. View Product\n"
              <<"4. Delete Product\n"
              <<"5. Return to Main Menu\n\n";
};
void displayStaffManagement(){
    std::cout <<"\n<<<<<<<<<<<<<<<< Staff Management >>>>>>>>>>>>>>>>>>>>\n\n"
              <<"1. Add Staff\n"
              <<"2. Update Staff\n"
              <<"3. View Staff\n"
              <<"4. Delete Staff\n"
              <<"5. Return to Main Menu\n\n";
};
void LoginDisplay(){
        std::cout <<"\n<<<<<<<<<< WELCOME >>>>>>>>>>>>>>>>\n";
        std::cout <<"\n             1. LOGIN\n";
        std::cout <<"\n             3. EXIT\n";
        std::cout <<"\n<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>\n";
};
