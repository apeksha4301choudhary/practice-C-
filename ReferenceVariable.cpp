#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    int &aa = a;
    cout<<"Value of a : "<<a<<endl;
    cout<<"Value of &aa : "<<a<<endl;
    aa = 36;
    cout<<"------------------------------"<<endl;
    cout<<"Value of a : "<<a<<endl;
    cout<<"Value of &aa : "<<a<<endl;

    cout<<"------------------------------"<<endl;

    aa = b;
    cout<<"Value of a : "<<a<<endl;
    cout<<"Value of &aa : "<<a<<endl;
}