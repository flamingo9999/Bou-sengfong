
#include <iostream>
#include <fstream>
#include <iomanip>
#include "ProductApplication.cpp"
#include "StaffApplication.cpp"
#include "DataValidInput.cpp"
#include "Display.cpp"
using namespace std;

class Application{
private:
    enum MainMenu { PRODUCT = 1,EXIT = 3, STAFF = 2};  
    int choice;

public:
void run() { 
    
    do{     
        displayMain();  
        choice = DataValidInput::getIntInput(">>> ");
        
        switch(choice){
        case PRODUCT: {
            
            ProductApplication productApp;
            productApp.run();
            break;
            }
        case STAFF: {
            
            StaffApplication staffApp;
            staffApp.run();
            cout << "Staff Management"<<endl;
            break;
            }
        case EXIT: {
            
            cout << "Back to Main Menu."<<endl;
            break;
            }
        default :{
            
            cout<<"Invalid input"<<endl;
            cout<<"\a"
                <<"Please enter a valid choice.";
            break;
            }
        }
    }while (choice!=EXIT);

 }

};
