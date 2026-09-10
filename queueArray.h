#ifndef QUEUEARRAY_H
#define QUEUEARRAY_H
#include <iostream>

using namespace std;


class queueArray
{
private:
    int *queue;
    int front;
    int rear;
    int size;

public:
    queueArray(int size=10)
    {
        queue=new int[size];
        this->size=size;
        front=0;
        rear=-1;
    }
    void enqueue(int x)
    {
        if (rear==size-1)
        {
            cout<<"queue overflow"<<endl;
        }
        else
        {
            rear++;
            queue [rear]=x;
        }
    }
    void dequeue()
    {
        if (front>rear)
            cout<<"queue underflow"<<endl;
        else
            front++;
    }
    void search(int x)
    {
        bool found=false;
        for(int i=front; i<=rear; i++)
        {
            if(queue[i]==x)
            {
                found=true;
                break;
            }
        }
        if (found)
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
        for(int i=front; i<=rear; i++)
        {
            cout<<queue[i]<<endl;
        }
    }

};

#endif // QUEUEARRAY_H
