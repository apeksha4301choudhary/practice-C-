#include <iostream>
using namespace std;

class Bhusari{
    string name;
    int age;
    float height;
    float weight;
    char gender;

public:
    Bhusari() {}

    Bhusari(string name, int age, float height, float weight, char gender) : name(name), age(age), height(height), weight(weight), gender(gender){
        cout<<"----------DEFAULT CONSTRUCTOR----------"<<endl;
    }

    void setName(string name){
        this->name = name;
    }

    void setAge(int age){
        this->age = age;
    }

    void setHeight(float height){
        this->height = height;
    }

    void setWeight(float weight){
        this->weight = weight;
    }

    void setGender(char gender){
        this->gender = gender;
    }

    void displayData() {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Height : "<<height<<endl;
        cout<<"Weight : "<<weight<<endl;
        cout<<"Gender : "<<gender<<endl;
    }

};

int main() {
    string name;
    int age;
    float height;
    float weight;
    char gender;
    int n;
    cout<<"Enter Number of Member You want to store : "<<endl;
    cin>>n;
    Bhusari* appu = new Bhusari[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter Your Name : "<<endl;
        cin.ignore();
        getline(cin, name);
        cout<<"Enter Your Age : "<<endl;
        cin>>age;
        cout<<"Enter Your Height : "<<endl;
        cin>>height;
        cout<<"Enter Your Weight : "<<endl;
        cin>>weight;
        cout<<"Enter Your Gender : "<<endl;
        cin>>gender;
        appu[i].setName(name);
        appu[i].setAge(age);
        appu[i].setHeight(height);
        appu[i].setWeight(weight);
        appu[i].setGender(gender);
    }

    for (int i = 0; i < n; i++)
    {
        cout<<"----------"<<i + 1<<"st Member----------"<<endl;
        appu[i].displayData();
    }

    delete[] appu;
}