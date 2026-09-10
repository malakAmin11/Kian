#ifndef STACKLINKED_H
#define STACKLINKED_H
#include <iostream>

using namespace std;

class stackLinked
{
private:

    struct Node
    {
        int date;
        Node *next;
    };
    Node *top;

public:
    stackLinked()
    {
        top=NULL;
    }
    void push(int x)
    {
        Node *newNode=new Node;
        newNode->date=x;
        newNode->next=top;
        top=newNode;
    }
    void pop()
    {
        if (top==NULL)
            cout<<"stack underflow"<<endl;
        else
        {
            Node *temp=top;
            top=top->next;
            delete temp;
        }
    }
    void print()
    {
        Node *temp=top;

        while(temp!=NULL)
        {
            cout<<temp->date<<endl;
            temp=temp->next;
        }
    }



};

#endif // STACKLINKED_H
