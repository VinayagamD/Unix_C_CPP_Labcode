//
// Created by Dell on 6/7/2019.
//

#include <iostream>
#include <conio.h>

using  namespace::std;

class  PrintData{
    public:
        void print(int i){
            cout<<"Printing int : "<< i << endl;
        }

        void print(double f){
            cout<<"Printing float : "<< f << endl;
        }

        void print(char* c){
            cout << "Printing character : "<< c << endl;
        }
};

int main(){
    PrintData pd = PrintData();
    pd.print(5);
    pd.print(500.263);
    pd.print("Hello C++");
    getch();
    return 0;
}