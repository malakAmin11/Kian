#include <iostream>
#include <arrayManager.h>

//session 1---- date structures

using namespace std;

int main()
{
    arrayManager a;
    a.insertLast(1);
    a.insertLast(2);
    a.insertLast(3);
    a.insertLast(4);

    a.insertAtPosition(10, 1);

    a.removeLast();

    a.removeAtPosition(1);
    cout<<a.Search(3) <<endl;
    a.edit(1, 20);
    a.print();



    return 0;
}
