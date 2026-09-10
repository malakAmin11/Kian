#ifndef STACKARRAY_H
#define STACKARRAY_H
#include <iostream>

using namespace std;


class stackArray
{
private:
    int *stack;
    int top;
    int size;
public:
    stackArray(int size=10)
    {
        stack=new int[size];
        this->size=size;
        top=-1;
    }
    void push(int value)
    {
        if (top==size-1)
        {
            cout<<"stack overflow"<<endl;
        }
        else
        {
            top++;
            stack[top]=value;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"stack underflow"<<endl;
        }
        else
        {
            top--;
        }
    }
    void print()
    {
        for(int i=top; i>=0; i--)
        {
            cout<<stack[i]<<endl;
        }
    }


};

#endif // STACKARRAY_H
