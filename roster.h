#pragma once
#ifndef ROSTER_H
#define ROSTER_H
#include "securityStudent.h"
#include "networkStudent.h"
#include "softwareStudent.h"
#include <iostream>
#include <string>
using namespace std;

class Roster {
public:
    Roster();
    ~Roster();
    void CurrentRoster();
    void AddStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram);
    void RemoveStudent(string studentID);
    void PrintAll();
    void PrintDaysInCourse(string studentID);
    void PrintInvalidEmails();
    void PrintByDegreeProgram(Degree degreeProgram);
    Student* classRosterArray[5] = { nullptr, nullptr, nullptr, nullptr, nullptr };
private:
    const string studentData[5] = { "A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
                                   "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
                                   "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
                                   "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
                                   "A5,Brandon,Hutchinson,bhutc48@wgu.edu,26,20,18,27,SOFTWARE" };
    
    Student* studentPtr = nullptr;
    int numStudents = 5;
    
};
#endif