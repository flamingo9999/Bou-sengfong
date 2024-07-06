#pragma once
#include <iostream>

using namespace std;

class User {
    private:
    string username;
    string password;
    string role; 
    public:
    
   User() {}
    User(string u, string p, string r) : username(u), password(p), role(r) {}
    //Getter methods
    string getUsername() const{
        return username;
    }
    string getPassword() const{
        return password; 
    }
    string getRole() const{
        return role;
    }
    //Setter methods
    void setUsername(string user){
        username=user;
    }
    void setPassword(string pass){
        password=pass;
    }
    void setRole(string r){
        role=r;
    }
};