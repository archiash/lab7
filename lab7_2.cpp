#include <iostream>
#include <string>
using namespace std;

int main(){
    string name, studentID;
    int gear;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline(cin, name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << name << ": ";
    cin >> studentID;
    cin.ignore();
    // Convert char to int by compare to '0' = 48
    // (int)'0' - 48 = 0
    gear = (studentID[0] - 48) * 10 + (studentID[1] - 48) - 12;
    cout << "Fahsai: I think you may be GEAR " << gear <<". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!! "<< endl;
    cout << "Fahsai: What movie do you want to watch?"<< endl;
    string movie;
    cout << name << ": ";
    getline(cin, movie);
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    string day;
    cout << name << ": ";
    getline(cin, day);
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you." << endl;
    string qoute;
    cout << name << ": ";
    cin >> qoute;
    cin.ignore();
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/ ";
    
}