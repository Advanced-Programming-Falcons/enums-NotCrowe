#include <iostream>

using namespace std;

enum GameMode {
    Easy = 1,
    Medium = 2,
    Hard = 4
};

int main(void){
    GameMode mode = Medium;

    cout << "Selected mode: ";
    switch(mode){
        case Easy:
            cout << "Easy" << endl;
            cout << "Looking for a chill experience?" << " The enemies are simply " << mode << " times as challenging." << endl;
            break;
        case Medium:
            cout << "Medium" << endl;
            cout << "Alright yeah this should be balanced for you." << " The enemies are going to be " << mode << " times as challenging as easy." << endl;
            break;
        case Hard:
            cout << "Hard" << endl;
            cout << "A true warrior has entered our halls." << " The enemies are going to be " << mode << " times as challenging as easy." << endl;
            break;
        default:
            cout << "How did you - wha!?" << endl;
    }

    return 0;
}
