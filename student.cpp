#include "student.h"
#include <iostream>
#include <string>
#include<array>
#include <iomanip>
using namespace std;

Student::Student(string studentIdIn, string firstNameIn, string lastNameIn, string emailAddressIn, int studentAgeIn, int daysInCourse1In, int daysInCourse2In, int daysInCourse3In, Degree degreeTypeIn) {
	studentID = studentIdIn;
	firstName = firstNameIn;
	lastName = lastNameIn;
	emailAddress = emailAddressIn;
	studentAge = studentAgeIn;
	numDaysToCompleteAllCourses[0] = daysInCourse1In;
	numDaysToCompleteAllCourses[1] = daysInCourse2In;
	numDaysToCompleteAllCourses[2] = daysInCourse3In;
	degreeType = degreeTypeIn;
};

Student::~Student() {
};

void Student::SetStudentID(string studentIdIn) {
	studentID = studentIdIn;
	return;
}
string Student::GetStudentID() {
	return studentID;
}
void Student::SetFirstName(string firstNameIn) {
	firstName = firstNameIn;
	return;
}
string Student::GetFirstName() {
	return firstName;
}
void Student::SetLastName(string lastNameIn) {
	lastName = lastNameIn;
	return;
}
string Student::GetLastName() {
	return lastName;
}
void Student::SetEmailAddress(string emailAddressIn) {
	emailAddress = emailAddressIn;
	return;
}
string Student::GetEmailAddress() {
	return emailAddress;
}
void Student::SetStudentAge(int studentAgeIn) {
	studentAge = studentAgeIn;
	return;
}
int Student::GetStudentAge() {
	return studentAge;
}
void Student::SetNumDaysToCompleteCourses(int daysInCourse1In, int daysInCourse2In, int daysInCourse3In) {
	courseDays1 = daysInCourse1In;
	courseDays2 = daysInCourse2In;
	courseDays3 = daysInCourse3In;
	numDaysToCompleteAllCourses[0] = courseDays1;
	numDaysToCompleteAllCourses[1] = courseDays2;
	numDaysToCompleteAllCourses[2] = courseDays3;
	return;
}
int& Student::GetNumDaysToCompleteCourses(int i) {
	return numDaysToCompleteAllCourses[i];
};
void Student::SetDegreeType(Degree degreeTypeIn) {
	degreeType = degreeTypeIn;
	return;
}
void Student::PrintStudentData() {
	cout << "Student ID: " << studentID << '\t'
		 << "First Name: " << firstName << '\t'
		 << "Last Name: " << lastName << '\t'
		 << "Email Address: " << setw(25) << emailAddress << '\t'
		 << "Days To Complete Each Course: {" << courseDays1 << ", " << courseDays2 << ", " << courseDays3 << "}" << '\t';
	if (degreeType == SOFTWARE) {
		cout << "Degree Program: Software " << endl;
	}
	else if (degreeType == SECURITY) {
		cout << "Degree Program: Security " << endl;
	}
	else if (degreeType == NETWORKING) {
		cout << "Degree Program: Networking " << endl;
	};
			
		
	return;
}
Degree Student::GetDegreeProgram() {
	return degreeType;
};
