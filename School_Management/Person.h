#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;


class Person
{
private:
    string name;
    int age;
    string gender;
    string phoneNumber;
    string address;
    string email;
    string id;
public:
    Person()
    {

    }
    Person(string name, int age, string gender, string phoneNumber, string address, string email, string id)
    {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->phoneNumber=phoneNumber;
        this->address=address;
        this->email=email;
        this->id=id;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setAge(int age)
    {
        this->age=age;
    }
    void setGender(string gender)
    {
        this->gender=gender;
    }
    void setPhoneNumber(string phoneNumber)
    {
        this->phoneNumber=phoneNumber;
    }
    void setAddress(string address)
    {
        this->address=address;
    }
    void setEmail (string email)
    {
        this->email=email;
    }
    void setID(string id)
    {
        this->id=id;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getGender()
    {
        return gender;
    }
    string getPhoneNumber()
    {
        return phoneNumber;
    }
    string getAddress()
    {
        return address;
    }
    string getEmail()
    {
        return email;
    }
    string getID()
    {
        return id;
    }
    void informations()
    {
        cout<<"Please enter your name: "<<endl;
        cin>>name;
        cout<<"Please enter your age: "<<endl;
        cin>>age;
        cout<<"Please enter your gender: "<<endl;
        cin>>gender;
        cout<<"Please enter your phone number: "<<endl;
        cin>>phoneNumber;
        cout<<"Please enter your address: "<<endl;
        cin>>address;
        cout<<"Please enter your email: "<<endl;
        cin>>email;
        cout<<"Please enter your ID: "<<endl;
        cin>>id;
    }

    void print()
    {
        cout<<"-----------------"<<endl;
        cout<<"-----------------"<<endl;
        cout<<"The name is: "<<name<<endl;
        cout<<"The age is: "<<age<<endl;
        cout<<"The gender is: "<<gender<<endl;
        cout<<"The phone number is: "<<phoneNumber<<endl;
        cout<<"The address is: "<<address<<endl;
        cout<<"The email is: "<<email<<endl;
        cout<<"The id is: "<<id<<endl;
    }


};

#endif // PERSON_H
