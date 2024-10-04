#include <iostream>
using namespace std;

int main() 
{
    int age;
    cout<<"Enter age: ";
    cin>>age;
    try
    {
        if (age<18)
        {
            throw age; 
        }
        else
        {
            cout<<"Age: "<<age<<"\nAPPROVED!"<<endl;
        }
    }
    catch (int a)
    {
        cout<<"Error: Underage! ("<<age<<")"<<endl;
    }
}

/*
OUTPUT: 
Enter age: 19
Age: 19
APPROVED!

Enter age: 16
ERROR!
Error: Underage! (16)
  */
