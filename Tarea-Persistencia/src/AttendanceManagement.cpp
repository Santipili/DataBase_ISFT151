#include "../include/AttendanceManagement.hpp"
#include "../include/Student.hpp"   // se vuelven a llamar?? 
#include "../include/Course.hpp"    // por mas que en el hpp ya se incluyen las bibliotecas?
#include <fstream>
#include <string>
#include <iostream>
//#include <stdio.h>
//#include <string.h>
FILE* archivo;



AttendanceManagement::AttendanceManagement() {

}

AttendanceManagement::~AttendanceManagement() {

}

void AttendanceManagement::takeAttendance(Student* student, Course* course, string datetime, bool state) {
    
    archivo = fopen("Atendance.csv", "w");  
    
    fprintf(archivo, (%s%s%s),student->getName(), student->getSurname(), student->getIdentifier() );
   
    fclose(archivo);
}

void AttendanceManagement::showAttendance() {
    archivo = fopen("Atendance.csv");


    fclose(archivo);

}