#include<iostream>
using namespace std;

class Base
{
    public :
        int A , B;

        Base()
        {
            cout<<"\n Inside Base Constructor ";
        }
        ~Base()
        {
            cout<<"\n Inside Base Destructor";
        }

        void Fun()
        {
            cout<<"\n Inside Base Fun";
        }
};

class Derived : public Base
{
    public :
        int X , Y;

        Derived()
        {
            cout<<"\n Inside Derived Constructor";
        }

        ~Derived()
        {
            cout<<"\n Inside Derived Destructor";
        }

        void Gun()
        {
            cout<<"\n Inside Gun of Derived";
        }
};

int main()
{
    Derived *ptr = NULL ;

    ptr = new Derived;

    delete ptr;

    return 0;
}