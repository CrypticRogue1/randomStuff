/*
This program is a vending machine
Note: This is a program to practice functions. A function is something where you have the actual thing 
that it does somewhere else on the screen. This can be an output or a calculation or algorithm.
To do:
 - Output their change
 - Output items, as a picture if possible.
 - Make a bill insert limit if things being bought isn't >thing going to buy. 
 - Display initial output with a visual vending machine
    ~ This will contain some chips, cookies, gummy bears, chocolate, gum, etc.
*/
#include <iostream>
#include <string>
using namespace std;

int main(){

    float change = 0.00, moneyIn = 0.00, charging = 0.00;
    int const ITEMS = 3;
    string vendingItems[ITEMS] = {"Ice_cream", "Cake", "Cookies"};
    string vendingNumbers[ITEMS];
    string helpAnswer;
    string choice;
    int items;
    
    cout << "Hello, do you need some help? Type 'yes' of 'no'" << endl;
    cin >> helpAnswer;
/* This is what I'm thnking for lines 29 through 38: 
                Everything looks ok but the 'vendingNumbers[items + 1]' part.
                I think this could do it the way I inted for it to do it which is 1, 2, 3,
                The other bad way is that it does it but it only counts like two numbers maybe. idk*/
 
    while(helpAnswer == "yes"){

        cout << "These are the things I have: " << endl;
        
        for(items = 0; vendingItems[items] < vendingItems[ITEMS]; items++){
            cout << vendingNumbers[items + 1] << ". " << vendingItems[items] << endl;
        }

        cout << "Which one would you like?" << endl << "Choose number "; // << endl;
        
        for(items = 0; vendingNumbers[items] < vendingNumbers[ITEMS]; items++){
            cout << vendingNumbers[items + 1] << ", ";
        }

        cin >> choice;

    }
    if(helpAnswer != "yes" && helpAnswer != "no"){
        cout << "Please enter, 'yes' of 'no' ";
        cin >> helpAnswer;
    }
    




    return 0;
}