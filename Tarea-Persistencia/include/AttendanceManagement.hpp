#pragma once

#include "./Student.hpp"
#include "./Course.hpp"
#include <iostream>
using namespace std;

class AttendanceManagement{
    public:
        AttendanceManagement();
        ~AttendanceManagement();

        void takeAttendance(Student* student, Course* course, string datetime, bool state);
        void showAttendance();
};
