#include "securityStudent.h"
#include <iostream>
using namespace std;

SecurityStudent::SecurityStudent() {
};

Degree SecurityStudent::GetDegreeProgram() {
	if (degreeType == SECURITY) {
		degreeType = securityDegree;
	};
	return degreeType;
};