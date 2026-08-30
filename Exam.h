#ifndef EXAM_H
#define EXAM_H
#include <iostream>
#include <Person.h>

using namespace std;


class Exam:public Person
{
private:
    string examName;
    string examCode;
    string examDate;
public:
    void setExamName(string examName)
    {
        this->examName=examName;
    }
    void setExamCode(string examCode)
    {
        this->examCode=examCode;
    }
    void setExamDate(string examDate)
    {
        this->examDate=examDate;
    }
    string getExamName()
    {
        return examName;
    }
    string getExamCode()
    {
        return examCode;
    }
    string getExamDate()
    {
        return examDate;
    }
    void informations()
    {
        Person::informations();
        cout<<"Please enter your exam name: "<<endl;
        cin>>examName;
        cout<<"Please enter your exam code: "<<endl;
        cin>>examCode;
        cout<<"Please enter your exam date: "<<endl;
        cin>>examDate;
    }
    void print()
    {
        Person::print();
        cout<<"The exam name is: "<<examName<<endl;
        cout<<"The exam code is: "<<examCode<<endl;
        cout<<"The exam date is: "<<examDate<<endl;
    }
};

#endif // EXAM_H
