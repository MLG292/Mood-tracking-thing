/*
Mason Gross
10/1/25
Mood tracker
Changed color output with a function
*/

#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <string>
using namespace std;

void Color(int color)
{
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); //Changes the color to the given argument
}

int main() {
    int player_input;
    Color(7);
    cout << "How are you feeling?" << endl; //Asks for users input
    cout << "1: Happy\n2: Sad\n3: Annoyed\n4: Angry\n5: Nothing" << endl;
    cin >> player_input;
    switch(player_input){
        case 1: //If they're happy
            Color(2);
            cout << "Glad you're happy!" << endl;
        break;
        case 2: //If they're sad
            Color(1);
            cout << "Aw, that sucks. I hope you get better soon." << endl;
        break;
        case 3: //If they're annoyed
            Color(6);
            cout << "Whatevers bothering you will ease and it will be fine later." << endl;
        break;
        case 4: //If they're angry
            Color(8);
            cout << "It won't bother you for long. Just let it go for now, no reason to dwell :)" << endl;
        break;
        case 5: //If they feel nothing
            Color(3);
            cout << "Sometimes not feeling anything is okay, you can do something if you're bored." << endl;
        break;
        default: //If invalid response
            Color(4);
            cout << "You need to type in one of the numbers!" << endl;
        break;
    }
    Color(7); //Resets terminal color
    return 0;
}