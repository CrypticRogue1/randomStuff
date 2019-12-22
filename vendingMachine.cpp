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

    double change = 0.00, moneyIn = 0.00, charging = 0.00;
    int const ITEMS = 3;
    string vendingItems[ITEMS] = {"Ice_cream", "Cake", "Cookies"};
    double vendingPrices[ITEMS] = {00.50, 2.00, 1.50};
    double endingNumbers[ITEMS];
    string helpAnswer;
    string choice;
    int items;
    
    cout << "Hello, do you need some help? Type 'yes' of 'no'" << endl;
    cin >> helpAnswer;
/* This is what I'm thnking for lines 29 through 38: 
                Everything looks ok but the 'vendingNumbers[items + 1]' part.
                I think this could do it the way I inted for it to do it which is 1, 2, 3,
                The other bad way is that it does it but it only counts like two numbers maybe. idk*/


//
//
//
//
//
    while(helpAnswer == "yes"){

        cout << "These are the things I have: " << endl;
            // So I've seen that this might loop forever (?) I feel like I need an actual compiler on this so I can test it better. 
            // I'll have to download the visual studio too.
        for(items = 0; vendingItems[items] < vendingItems[ITEMS]; items++){
            cout << vendingNumbers[items + 1] << ". " << vendingItems[items] << "$" << vendingPrices[items] << endl;
        }

        cout << "Which one would you like?" << endl << "Choose number " << endl;
            
        for(items = 0; vendingNumbers[items] < vendingNumbers[ITEMS]; items++){
            cout << vendingNumbers[items + 1] << "  ";
        }

        cin >> choice;
            
        for(items = 0; choice != vendingNumbers[items]; items++){
            if(choice == vendingNumbers[items]){
                cout << "You have chosen: " << vendingNumbers[items] << " " << vendingItems[items] << ", " << "$" << vendingPrices[items] << endl; 
                //Need to add the asking for the money next
            }
        }


        cout << "Do you need any more help? ";
        cin >> helpAnswer;

        if(helpAnswer != "yes" && helpAnswer != "no"){
            cout << "Please enter 'yes' of 'no': ";
            cin >> helpAnswer;
        }
    }
    cout << "This is the EOP"; // This goes off if it ends up being a no.
//
//
//
//
//
//

/*
    if(helpAnswer == "yes"){

    }
    else if(helpAnswer != "yes" && helpAnswer != "no"){

    }
    else{

    }

    while(helpAnswer != "no"){

        while(helpAnswer == "yes"){

            cout << "These are the things I have: " << endl;
            
            for(items = 0; vendingItems[items] < vendingItems[ITEMS]; items++){
                cout << vendingNumbers[items + 1] << ". " << vendingItems[items] << "$" << vendingPrices[items] << endl;
            }

            cout << "Which one would you like?" << endl << "Choose number " << endl;
            
            for(items = 0; vendingNumbers[items] < vendingNumbers[ITEMS]; items++){
                cout << vendingNumbers[items + 1] << "  ";
            }

            cin >> choice;
            
            for(items = 0; choice != vendingNumbers[items]; items++){
                if(choice == vendingNumbers[items]){
                    cout << "You have chosen: " << vendingNumbers[items] << " " << vendingItems[items] << ", " << "$" << vendingPrices[items] << endl; 
                    //Need to add the asking for the money next
                }
            }

        }
    }
    */




    return 0;
}