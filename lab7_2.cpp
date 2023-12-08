#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    int studentID, gear;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline(cin, name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << name << ": ";
    cin >> studentID;
    cin.ignore();
    gear = studentID;
    while(gear >= 100){
        gear /= 10;
    }
    cout << "Fahsai: I think you may be GEAR " << gear - 12 <<". I have a free movie ticket for you." << endl;
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