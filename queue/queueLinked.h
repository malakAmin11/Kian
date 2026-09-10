#ifndef QUEUELINKED_H
#define QUEUELINKED_H
#include <iostream>

using namespace std;

class queueLinked
{
private:
    struct Node
    {
        int date;
        Node *next;
    };
    Node *front;
    Node *rear;
public:
    queueLinked()
    {
        front=NULL;
        rear=NULL;
    }
    void enqueue(int x)
    {
        Node *newNode= new Node;
        newNode->date=x;
        newNode->next=NULL;
        if (rear==NULL)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next=newNode;
            rear=newNode;
        }
    }
    void dequeue()
    {
        if (front==NULL)
        {
            cout<<"queue enderflow"<<endl;
        }
        else
        {
            Node *temp=front;
            front=front->next;
            delete temp;

            if (front == NULL)
            {
                rear=NULL;
            }
        }
    }
    void search (int x)
    {
        Node *temp=front;
        bool found = false;

        while (temp != NULL)
        {
            if (temp->date==x)
            {
                found=true;
                break;
            }
            temp = temp->next;
        }
        if (found == true)
        {
            cout<<"found"<<endl;
        }
        else
        {
            cout<<"not found"<<endl;
        }
    }
    void print()
    {
        Node *temp=front;

        while(temp!=NULL)
        {
            cout<<temp->date<<endl;
            temp=temp->next;
        }
    }

};

#endif // QUEUELINKED_H
