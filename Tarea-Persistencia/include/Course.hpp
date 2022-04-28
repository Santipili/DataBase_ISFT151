#pragma once

#include <iostream>
using namespace std;

class Course {
    private:
        int _identifier;
        string _name;

    public:
        Course();
        ~Course();

        void setIdentifier(int identifier);
        void setName(string name);
        int getIdentifier();
        string getName();
};