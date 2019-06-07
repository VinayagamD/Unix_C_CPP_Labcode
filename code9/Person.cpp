//
// Created by Dell on 6/7/2019.
//

#include <iostream>
#include <conio.h>

using  namespace::std;

class Person{
    public:
        char name[20];
        int number;
};

int main(){

    Person obj = Person();
    cout<< "Enter the name : "<<endl;
    cin >> obj.name;
    cout<< "Enter a number:"<<endl;
    cin >> obj.number;

    cout << obj.name <<" : "<<obj.number<<endl;
    return 0;
}