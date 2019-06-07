//
// Created by Dell on 6/7/2019.
//

#include <iostream>
#include <conio.h>

using namespace ::std;

int main() {

    int choice;

    cout << "1 -> Talk" << endl;
    cout << "2 -> Eat" << endl;
    cout << "3 -> Play" << endl;
    cout << "4 -> Sleep" << endl;

    cout << "Enter your choice : " << endl;
    cin >> choice;
    switch(choice) {
        case 1:
            cout << "You chose to talk...talking too much is a bad habit." << endl;
            break;
        case 2:
            cout << "You chose to eat...eating healthy is foodstuff is good." << endl;
            break;
        case 3:
            cout << "You chose to play...playing too much is a bad." << endl;
            break;
        case 4:
            cout << "You chose to sleep...sleeping enough is good habit." << endl;
            break;
        default:
            cout << "You cdid not choose anything...so exit this program." << endl;

    }

    getch();
    return 0;
}