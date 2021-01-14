#include "roster.h"
#include <iostream>
#include <string>
using namespace std;

Roster::Roster() {
	string* classRosterArray[5] = {NULL};
	string* studentPtr = nullptr;
};
Roster::~Roster() {
	delete studentPtr;
	cout << '\n' << '\n' << "Roster Destructor called succesfully." << endl;
};
void Roster::AddStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram)
{
	int i = 0;
	for (i = 0; i < numStudents; ++i) {
		if (classRosterArray[i] == NULL) {
			if (degreeProgram == SOFTWARE) {
				studentPtr = new SoftwareStudent;
				studentPtr->SetStudentID(studentID);
				studentPtr->SetFirstName(firstName);
				studentPtr->SetLastName(lastName);
				studentPtr->SetEmailAddress(emailAddress);
				studentPtr->SetStudentAge(age);
				studentPtr->SetNumDaysToCompleteCourses(daysInCourse1, daysInCourse2, daysInCourse3);
				studentPtr->SetDegreeType(degreeProgram);
				classRosterArray[i] = studentPtr;
				break;
			}
			else if (degreeProgram == SECURITY) {
				studentPtr = new SecurityStudent;
				studentPtr->SetStudentID(studentID);
				studentPtr->SetFirstName(firstName);
				studentPtr->SetLastName(lastName);
				studentPtr->SetEmailAddress(emailAddress);
				studentPtr->SetStudentAge(age);
				studentPtr->SetNumDaysToCompleteCourses(daysInCourse1, daysInCourse2, daysInCourse3);
				studentPtr->SetDegreeType(degreeProgram);
				classRosterArray[i] = studentPtr;
				break;
			}
			else if (degreeProgram == NETWORKING) {
				studentPtr = new NetworkStudent;
				studentPtr->SetStudentID(studentID);
				studentPtr->SetFirstName(firstName);
				studentPtr->SetLastName(lastName);
				studentPtr->SetEmailAddress(emailAddress);
				studentPtr->SetStudentAge(age);
				studentPtr->SetNumDaysToCompleteCourses(daysInCourse1, daysInCourse2, daysInCourse3);
				studentPtr->SetDegreeType(degreeProgram);
				classRosterArray[i] = studentPtr;
				break;
			}
			else {
				cout << "Error, No Degree Type included." << endl;
			}
		};
	};
};
void Roster::RemoveStudent(string studentIdIn) {
	int i = 0;
	int j = 0;
	for (i = 0; i < numStudents; ++i) {
		if (classRosterArray[i]->GetStudentID() == studentIdIn) {
			for (j = i; j < numStudents; ++j) {
				classRosterArray[j] = classRosterArray[j + 1];
			};
			classRosterArray[numStudents - 1] = new Student;
			break;
		};
		if ((classRosterArray[i]->GetStudentID() != studentIdIn) && i + 1 == numStudents) {
			cout << "Error: Student ID not found." << endl;
		};
	};
	return;
};	
void Roster::PrintAll() {
	int i = 0;
	int j = 0;
	for (i = 0; i < numStudents; ++i) {
		Student student = *classRosterArray[i];
		cout << i + 1 << '\t';
		student.PrintStudentData();
	};
};
void Roster::PrintDaysInCourse(string studentIdIn) {
	int avgDays = 0;
	int totDays = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i < numStudents; ++i) {
		if (classRosterArray[i]->GetStudentID() == studentIdIn) {
			Student student = *classRosterArray[i];
			for (j = 0; j < 3; ++j) {
				totDays += student.GetNumDaysToCompleteCourses(j);
			};
			avgDays = totDays / 3;
			cout << "Student's average days in all courses: " <<  avgDays << endl;
			return;
		};
	};
};
void Roster::PrintInvalidEmails() {
	int i = 0;
	string reqChar1 = "@";
	string reqChar2 = ".";
	string badChar = " ";
	for (int i = 0; i < numStudents; ++i) {
		Student student = *classRosterArray[i];
		string emailHolder = student.GetEmailAddress();
		if (emailHolder.find(reqChar1) == string::npos) {
			cout << emailHolder << endl;
		}
		else if (emailHolder.find(reqChar2) == string::npos) {
			cout << emailHolder << endl;
		}
		else if (emailHolder.find(badChar) != string::npos) {
			cout << emailHolder << endl;
		};
	};
};
void Roster::PrintByDegreeProgram(Degree degreeProgram) {
	int i = 0;
	for (i = 0; i < numStudents; ++i) {
		Student student = *classRosterArray[i];
		if (student.GetDegreeProgram() == degreeProgram) {
			student.PrintStudentData();
		}
		/*else if (student.GetDegreeProgram() == SECURITY) {
			student.PrintStudentData();
		}
		else if (student.GetDegreeProgram() == NETWORKING) {
			student.PrintStudentData();
		};*/
	};
};



void main() {
	    cout << "Scripting and Programming Applications - C867" << '\t' << "Using C++" << '\t' << "WGU Student ID: 001282535" << '\t' << "Name: Brandon Hutchinson" << endl;
	    cout << '\n' << endl;
		int numStudents = 5;
	    Roster classRoster;
		classRoster.AddStudent("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, SECURITY);
	    classRoster.AddStudent("A2","Suzan","Erickson","Erickson_1990@gmailcom", 19, 50, 30, 40, NETWORKING);
	    classRoster.AddStudent("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, SOFTWARE);
	    classRoster.AddStudent("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, SECURITY);
	    classRoster.AddStudent("A5", "Brandon", "Hutchinson", "bhutc48@wgu.edu", 26, 33, 36, 21, SOFTWARE);
	    classRoster.PrintAll();
		cout << endl;
	    classRoster.PrintInvalidEmails();
	    cout << endl;
		
		for (int i = 0; i < numStudents; ++i) {
			classRoster.PrintDaysInCourse(classRoster.classRosterArray[i]->GetStudentID());
		};
		cout << '\n' << endl;
		classRoster.PrintByDegreeProgram(SOFTWARE);
		cout << '\n' << endl;
		classRoster.RemoveStudent("A3");
		cout << '\n' << endl;
		classRoster.RemoveStudent("A3");
		cout << '\n' << endl;
			
	return;
};

