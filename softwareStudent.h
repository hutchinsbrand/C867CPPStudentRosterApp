#pragma once
#ifndef SOFTWARE_STUDENT_H
#define SOFTWARE_STUDENT_H
#include "student.h"
using namespace std;

class SoftwareStudent : public Student {
    public:
		SoftwareStudent();
	    Degree GetDegreeProgram();
    private:
	    Degree softwareDegree = SOFTWARE;
};
#endif