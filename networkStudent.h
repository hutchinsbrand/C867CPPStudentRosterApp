#pragma once
#ifndef NETWORK_STUDENT_H
#define NETWORK_STUDENT_H
#include "student.h"
using namespace std;

class NetworkStudent : public Student {
	public:
		NetworkStudent();
		Degree GetDegreeProgram();
	private:
		Degree networkDegree = NETWORKING;
};

#endif