/*
This program is a vending machine
Note: This is a program to practice functions. A function is something where you have the actual thing 
that it does somewhere else in the code. Honestly it would be good to use if it was on another file- but anyway.
A function can be an output or a calculation or algorithm.
To do:
 - Output their money change
 - Output items, as a picture if possible.
 - Make a bill insert limit if things being bought isn't >thing going to buy. 
 - Display initial output with a visual vending machine
    ~ This will contain some chips, cookies, gummy bears, gummy worms, chocolate, gum, etc.
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
    float itemCost;
    float change;
    float inMoney;
    int ITEMS_VENDING = 6;
   
    string MONEY_SIGN = "$";
    string actualChange = MONEY_SIGN + change; //Huh? Why is the plus sign red?
    string vendingItems[ITEMS_VENDING];
    string helpYes();
    string answer;
    string personName;
    
    cout << "Hello, enter your name?";
    cin >> personName;
    cout << "Do you need any help " << personName << "?" << endl;
    cin >> answer;

    if(answer == "yes"){
        cout << "Test to see if this works" << endl;     //helpYes();   <---- This is the function in the bottom.
    }
    else if(answer != "yes" && answer != "no"){
        cout << "Please enter 'yes' to continue the program or not to quit.";
        cin >> answer;
    }
    else{
        cout << "Your change is: " << change << endl;
        cout << "Thank you for vending. Hace a nice day!";
    }


    return 0;
}
string helpYes(){
    string answer2;


return answer2;
}