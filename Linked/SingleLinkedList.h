#ifndef SINGLELINKEDLIST_H
#define SINGLELINKEDLIST_H
#include <iostream>

using namespace std;

class SingleLinkedList
{
private:

    struct Node
    {
        int item;
        Node* next;
    };
    int length;
    Node*left;
    Node *right;
public:

    SingleLinkedList()
    {
        length=0;
        left=right= NULL;
    }

    void insertRight(int value)
    {
        Node* newNode=new Node;
        newNode->item = value;
        newNode->next=NULL;
        if(length==0)
        {
            left=right=newNode;
        }
        else
        {
            right->next=newNode;
            right=newNode;
        }
        length++;
    }
        void insertLeft(int value)
        {
            Node* newNode=new Node;
            newNode->item=value;
            newNode->next=NULL;
            if(length==0)
            {
                left= right= newNode;
            }
            else
            {
                right->next=newNode;
                right=newNode;
            }
            length++;
        }
        void insertAtPosition(int position, int value)
        {
            Node* x=left;
            for(int i=0; i<position-1; i++)
            {
                x= x->next;
            }
            Node* newNode =new Node;
            newNode->item=value;
            newNode->next= x->next;
            x->next=newNode;
            length;
        }
        void removeRight()
        {
            if(length==0)
            {
                return;
            }
            if(length==1)
            {
                removeLeft();
                return;
            }
            Node* x=left;
            while(x->next!= right)
            {
                x=x->next;
            }
            right =x;
            x=x->next;
            right->next=NULL;
            delete x;
            length--;
        }

        void removeLeft()
        {
            if (length==0)
            {
                return;
            }
            Node* x=left;
            left =left->next;
            x->next =NULL;
            delete x;
            length--;
            if(length == 0)
            {
                right=NULL;
            }
        }
        void removeAtPosition(int position)
        {
            Node* x=left;
            Node* y=left->next;
            for(int i=1; i<position; i++)
            {
                x=x->next;
                y=y->next;
            }
            x->next=y->next;
            y->next=NULL;
            delete y;
            length--;
        }
        void Search(int value)
        {
            Node* x=left;
            int position=0;
            while(x!= NULL)
            {
                if(x->item == value)
                {
                    cout<<"the value is found: "<<endl;
                    cout<<position<<endl;
                    return;
                }
                x=x->next;
                position++;
            }
            cout<<"the value not found: "<<endl;
        }
        void print()
        {
            Node* x=left;
            while(x!= NULL)
            {
                cout<<x->item<<"";
                x=x->next;
            }
            cout<<endl;
            cout<<endl;
        }



};

#endif // SINGLELINKEDLIST_H
