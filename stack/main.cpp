#include <iostream>
#include <stackArray.h>
#include <stackLinked.h>

using namespace std;

int main()
{
    stackArray s;
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.pop();
    s.print();
    cout<<"---------------"<<endl;
    stackLinked l;
    l.push(9);
    l.push(10);
    l.push(11);
    l.pop();
    l.print();




    return 0;
}
