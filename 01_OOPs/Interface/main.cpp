#include <iostream>

using namespace std;

class I {
    public:
        virtual string getName() = 0;
};

class A : public I {
    public:
        string getName() {
            return "Himanshu";
        }
};

class B : public I {
    public:
        string getName() {
            return "Riya";
        }
};

int main()
{
    A objA;
    B objB;
    I *ptr;

    ptr = &objA;
    cout<< ptr->getName() << endl;
    ptr = &objB;
    cout<< ptr->getName() << endl;
    //cout << "Learning Interface" << endl;
    return 0;
}
