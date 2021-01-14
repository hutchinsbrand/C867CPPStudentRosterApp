#include "softwareStudent.h"
#include <iostream>
using namespace std;

SoftwareStudent::SoftwareStudent() {
};

Degree SoftwareStudent::GetDegreeProgram() {
	if (degreeType == SOFTWARE) {
		degreeType = softwareDegree;
	};
	return degreeType;
};