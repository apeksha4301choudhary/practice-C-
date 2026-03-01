#include <iostream>
using namespace std;

class A{
     mutable int a= 65;

public:
    int incrr() {
        ++a;
        cout<<"Value : "<<a<<endl;
    }

    int in() const{
        a++;
        cout<<"State : "<<a<<endl;
    }
};

int main() {
    A a;
    a.incrr();
    a.in();
}