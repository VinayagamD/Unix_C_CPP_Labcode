//
// Created by Dell on 6/7/2019.
//

#include <iostream>
#include <conio.h>

using  namespace std;

int main(){
    int x , y, z, biggest;

    cout << "Enter 3 integers : "<<endl;
    cin >>x>>y>>z;

    biggest = x ;

    if(biggest < y)
        biggest = y;

    if(biggest < z)
        biggest = z;

    cout << "The biggest integer out of the 3 integers you typed \n";
    cout << x<<","<<y<<","<<z<<":\n"<<biggest<<"\n";
    getch();
    return 0;
}