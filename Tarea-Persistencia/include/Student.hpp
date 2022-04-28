#pragma once

#include <iostream>
using namespace std;

class Student {
    private:
        int _identifier;
        string _name;
        string _surname;
    
    public:
        void setIdentifier(int identifier);
        void setName(string name);
        void setSurname(string surname);
        int getIdentifier();
        string getName();
        string getSurname();

        Student();
        ~Student();
};