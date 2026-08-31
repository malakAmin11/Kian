#ifndef ARRAYMANAGER_H
#define ARRAYMANAGER_H
#include <iostream>

using namespace std;


class arrayManager
{
private:
    int *arr;
    int lenght;
public:
    arrayManager(int number=10)
    {
        arr=new int[number];
        lenght=0;
    }
    ~arrayManager()
    {
        delete []arr;
    }
    void insertLast(int value)
    {
        arr [lenght]=value;
        lenght++;
    }
    void removeLast()
    {
        lenght--;
    }
    void insertAtPosition(int value,int position)
    {
        for(int i=lenght; i>position; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[position] = value;
        lenght++;
    }
    void removeAtPosition(int position)
    {
        for(int i=position; i<lenght-1; i++)
        {
            arr[i]=arr[i+1];
        }
        lenght--;
    }
    int Search(int value)
    {
        for(int i=0; i<lenght; i++)
        {
            if (arr[i]==value)
            {
                return i;
            }
        }
    }
    void edit(int position, int value)
    {
        arr[position]=value;
    }
    void print()
    {
        for(int i=0; i<lenght; i++)
        {
            cout<<arr[i]<<endl;
        }
    }


};

#endif // ARRAYMANAGER_H
