#include "../include/AttendanceManagement.hpp"
#include "../include/Student.hpp"   
#include "../include/Course.hpp"    
#include <fstream>
#include <string>
#include <iostream>

//FILE* persistence;



AttendanceManagement::AttendanceManagement() {

}

AttendanceManagement::~AttendanceManagement() {

}

void AttendanceManagement::takeAttendance(Student* student, Course* course, string datetime, bool state) {

    ofstream persistence;
    persistence.open("atendance.csv", ios_base::app);

    if (persistence.is_open()){
    persistence << student->getIdentifier() <<","<< student->getSurname() <<","<< student->getName() <<","<< course->getName()<<","<< datetime<<","<< state <<",\n";
    }  
      
    persistence.close();
}

void AttendanceManagement::showAttendance() {
    string row;
    ifstream persistence;
    persistence.open("atendance.csv", ios_base::in);

    if (persistence.is_open()){
        getline(persistence, row);

        while (!persistence.eof()){
            std::cout << row << endl;
            getline(persistence, row);
        }
    }
    
    persistence.close();
}