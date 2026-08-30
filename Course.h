#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <Person.h>


class Course:public Person
{
private:
    string courseName;
    string courseCode;
    string courseTeacher;
public:
    void setCourseName(string courseName)
    {
        this->courseName=courseName;
    }
    void setCourseCode(string courseCode)
    {
        this->courseCode=courseCode;
    }
    void setCourseTeacher(string courseTeacher)
    {
        this->courseTeacher=courseTeacher;
    }
    string getCourseName()
    {
        return courseName;
    }
    string getCourseCode()
    {
        return courseCode;
    }
    string getCourseTeacher()
    {
        return courseTeacher;
    }
    void informations()
    {
        Person::informations();
        cout<<"Please enter your course name: "<<endl;
        cin>>courseName;
        cout<<"Please enter your course code: "<<endl;
        cin>>courseCode;
        cout<<"Please enter your course teacher: "<<endl;
        cin>>courseTeacher;
    }
    void print()
    {
        Person::print();
        cout<<"The course name is: "<<courseName<<endl;
        cout<<"The course code is: "<<courseCode<<endl;
        cout<<"The course teacher is: "<<courseTeacher<<endl;
    }


};

#endif // COURSE_H
