#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    cout << "Press Enter 3 times to reveal your future." << endl;

    cin.get();
    cin.get();
    cin.get();

    string grade[] = {"A","B+","B","C+","C","D+","D","F","W"};

    srand(time(0));
    int Rdgrade = rand()%9;

    cout << "You will get " << grade[Rdgrade] << " in this 261102.";

}