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
int helpYes(int change, int helpFlag);

int main(){
//    float itemCost; // Needed in helpYes();
//    float change = 0.00; // Needed in helpYes();
//    float inMoney; // Needed in helpYes();
//    int const ITEMS_VENDING = 6; // Needed in helpYes();
//    int items = ITEMS_VENDING; // Needed in helpYes();
//    string vendingItems[ITEMS_VENDING] = {"pepe", "popo", "peepee", "cake", "pastel", "chocolate"}; // Needed in helpYes;
    string answer; // ?
    string personName;
    
    cout << "Hello, enter your name?";
    cin >> personName;
    cout << "Do you need any help " << personName << "?" << endl;
    cin >> answer;
    
    while(answer != "no"){
        if(answer != "yes" && answer != "no"){
            cout << "Please enter 'yes' to continue the program or 'no' to quit.";
            cin >> answer;
        }
        if(answer == "yes"){
            helpYes(); // The output should be to see if 'yes' of 'no' for the next loop  
        }
        /* else{
            cout << "Your change is: " << change << endl;
            cout << "Thank you for vending. Hace a nice day!";
        } */
    }
    cout << "Your change is: " << /* change << */ endl; // Need to change this so that it shows only for the yes one and not for the no one because then it's going to use it for both.
    cout << "Thank you for vending. Have a nice day! ";

    return 0;
}
float helpYes(float change, int helpFlag){
    float itemCost = 0.00;
    float inMoney = 0.00;
    int const ITEMS_VENDING = 6;
    //Line 
    string helpFlag; // <-- used when you're trying to get 'yes' or 'no'
    bool flag; // <-- used when you want to change it to true or false when they put 'yes' or 'no'

    float change = 0.00;
    int items = 0;
    string itemNumbers[ITEMS_VENDING] = {"1", "2", "3", "4", "5", "6"};
    string vendingItems[ITEMS_VENDING] = {"pepe", "popo", "peepee", "cake", "pastel", "chocolate"};
    float ;
    
    cout << "These are the items I have: " << endl;
    
    for(int items = 0; items < ITEMS_VENDING; items++){
        cout << itemNumbers[items] << "_" << vendingItems[items] << endl;
    }



return;
}