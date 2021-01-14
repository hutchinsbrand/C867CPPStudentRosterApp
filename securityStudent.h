#pragma once
#ifndef SECURITY_STUDENT_H
#define SECURITY_STUDENT_H
#include "student.h"
using namespace std;

class SecurityStudent : public Student {
    public:
		SecurityStudent();
	    Degree GetDegreeProgram();
    private:
	    Degree securityDegree = SECURITY;
};
#endif