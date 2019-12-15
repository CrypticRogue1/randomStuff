/*
This program is a vending machine
Note: This is a program to practice functions. A function is something where you have the actual thing 
that it does somewhere else on the screen. This can be an output or a calculation or algorithm.
To do:
 - Output their money change
 - Output items, as a picture if possible.
 - Make a bill insert limit if things being bought isn't >thing going to buy. 
 - Display initial output with a visual vending machine
    ~ This will contain some chips, cookies, gummy bears, chocolate, gum, etc.
Do:
 - A function for yes/no(?)
 - pseudocode/flowchart
    ~ Get an outer loop with an End of Program feature (EOP)
    ~ Might include a flag(if/else)?
*/
#include <iostream>
#include <string>

using namespace std;
int main(){
string n;
string stringTestFunc();
void vendingMachine();
string help;
bool helpFlag = false;
//

stringTestFunc();
vendingMachine();
cout << "Do you need help?";
cin >> help;
if(help == "yes"){
//Make a function for the yes section
    helpFlag = true;
    cout << "What would you like from the vending machine?";
}
else{
//Make a function for the no section if applicable.
}

return 0;
}

string stringTestFunc(){
/*Note: Functions need their return- or any values that they're using
        to be declared in their function. (i.e string n;)*/
    string n;
    cout << "What is your name?" << endl;
    cin >> n;

return n; 
}


void vendingMachine(){
    cout << "I am your vending machine for today. " << endl;
}
