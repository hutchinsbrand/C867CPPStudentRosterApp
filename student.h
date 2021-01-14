#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include "degree.h"
#include <string>
#include <iostream>
#include <tuple>
using namespace std;

class Student {
public:
	//Constructor
	Student(string studentIdIn = "none", string firstNameIn = "none", string lastNameIn = "none", string emailAddressIn = "none", int ageIn = 0, int daysInCourse1In = 0, int daysInCourse2In = 0, int daysInCourse3In = 0, Degree degreeTypeIn = NONE);
	//Destructor
	~Student();
	//Accessors
	string GetStudentID();
	string GetFirstName();
	string GetLastName();
	string GetEmailAddress();
	int GetStudentAge();
	int& GetNumDaysToCompleteCourses(int i);
	//Mutators
	void SetStudentID(string id);
	void SetFirstName(string fName);
	void SetLastName(string lName);
	void SetEmailAddress(string email);
	void SetStudentAge(int age);
	void SetNumDaysToCompleteCourses(int daysInCourse1In, int daysInCourse2In, int daysInCourse3In);
	void SetDegreeType(Degree degree);
	//virtual print function
	virtual void PrintStudentData();
	//virtual GetDegreeProgram
	virtual Degree GetDegreeProgram();
	
protected:
	Degree degreeType = NONE;
private:
	
	string studentID = "";
	string firstName = "";
	string lastName = "";
	string emailAddress = "";
	int studentAge = 0;
	int courseDays1 = 0;
	int courseDays2 = 0;
	int courseDays3 = 0;
	int numDaysToCompleteAllCourses[3];
	
};

#endif