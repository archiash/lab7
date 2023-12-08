#include <iostream>
using namespace std;

int main() {
int i = 0;

while(i < 58){

    char x = 'A'+i;

    cout << x;

    i++;

}

    int a  =  20, b = 30;
    int c = 4;
    float output;

    output = a - (float)b/c;
    cout << endl << "output: " << output << "\n";
    return 0;
}
