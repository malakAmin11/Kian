#include <iostream>
#include <queueArray.h>
#include <queueLinked.h>

using namespace std;

int main()
{
    queueArray q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    q.search(10);
    q.print();
    cout<<"----------------"<<endl;
    queueLinked m;
    m.enqueue(40);
    m.enqueue(50);
    m.enqueue(60);
    m.dequeue();
    m.search(50);
    m.print();





    return 0;
}
