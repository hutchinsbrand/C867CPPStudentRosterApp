#include "networkStudent.h"
#include <iostream>
using namespace std;

NetworkStudent::NetworkStudent() {
};

Degree NetworkStudent::GetDegreeProgram() {
	if (degreeType == NETWORKING) {
		degreeType = networkDegree;
	};
	return degreeType;
};