#ifndef CLASSROOM_H
#define CLASSROOM_H
#include <iostream>
#include <Person.h>

using namespace std;


class Classroom:public Person
{
private:
    string roomNumber;
    int capacity;
public:
    void setRoomNumber(string roomNumber)
    {
        this->roomNumber=roomNumber;
    }
    void setCapacity(int capacity)
    {
        this->capacity=capacity;
    }
    string getClassRoom()
    {
        return roomNumber;
    }
    int getCapacity()
    {
        return capacity;
    }
    void informations()
    {
        Person::informations();
        cout<<"Please enter your room number: "<<endl;
        cin>>roomNumber;
        cout<<"Please enter your capacity: "<<endl;
        cin>>capacity;
    }
    void print()
    {
        Person::print();
        cout<<"The room number is: "<<roomNumber<<endl;
        cout<<"The capacity is: "<<capacity<<endl;
    }



};

#endif // CLASSROOM_H
