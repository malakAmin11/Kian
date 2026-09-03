#include <iostream>
#include <SingleLinkedList.h>

using namespace std;

int main()
{
    SingleLinkedList List;

    int choise;
    int value;
    int position;

    do
    {
        cout<<"1_ Insert left"<<endl;
        cout<<"2_ Insert right"<<endl;
        cout<<"3_ Insert at position"<<endl;
        cout<<"4_ Remove left"<<endl;
        cout<<"5_ Remove right"<<endl;
        cout<<"6_ Remove at position"<<endl;
        cout<<"7_ Search"<<endl;
        cout<<"8_ Print"<<endl;
        cout<<"9_ Exit"<<endl;
        cout<<"Enter your choise: "<<endl;
        cin>>choise;

        switch(choise)
        {
        case 1:
            cout<<"Enter value: "<<endl;
            cin>>value;
            List.insertLeft(value);
            break;
        case 2:
            cout<<"Enter value: "<<endl;
            cin>>value;
            List.insertRight(value);
            break;
        case 3:
            cout<<"Enter value"<<endl;
            cin>>value;
            cout<<"Enter position"<<endl;
            cin>>position;
            List.insertAtPosition(value, position);
            break;
        case 4:
            List.removeRight();
            break;
        case 5:
            List.removeRight();
            break;
        case 6:
            cout<<"Enter position: "<<endl;
            cin>>position;
            List.removeAtPosition(position);
            break;
        case 7:
            cout<<"Enter value: "<<endl;
            cin>>value;
            List.Search(value);
            break;
        case 8:
            List.print();
            break;
        case 9:
            cout<<"Good bye....."<<heart<<endl;
            break;
        default:
            cout<<"Invlid choise."<<endl;
        }
    }
    while(choise!=9);




    return 0;
}
