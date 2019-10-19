// JumpinJava.cpp - This program looks up and prints the names and prices of coffee orders.  
// Input:  Interactive
// Output:  Name and price of coffee orders or error message if add-in is not found 

#include <iostream>
#include <string>
using namespace std;

int main()
{
   // Declare variables.
   string addIn;     // Add-in ordered
   const int NUM_ITEMS = 5; // Named constant
   // Initialized array of add-ins
   string addIns[NUM_ITEMS] = {"Cream", "Cinnamon", "Chocolate", "Amaretto", "Whiskey"}; 
   // Initialized array of add-in prices
   double addInPrices[NUM_ITEMS] = {.89, .25, .59, 1.50, 1.75};
   bool foundIt = false;     // Flag variable
   int x;   		     // Loop control variable
   double orderTotal = 2.00; // All orders start with a 2.00 charge

   // Get user input
   cout << "Enter coffee add-in or XXX to quit: ";
   cin >> addIn;
		
   // Write the rest of the program here.
   for(x = 0; x < NUM_ITEMS; x++){
    if(addIn == addIns[x]){
      for(x = 0; x < NUM_ITEMS; x++){
      foundIt = true;
      while(foundIt == true && addIn == addIns[x]){
      cout << "The price of " << addIns[x] << " is " << addInPrices[x] << endl;
      orderTotal = orderTotal + addInPrices[x];
      cout << "Enter coffee add-in or XXX to quit: ";
      cin >> addIn;
      foundIt = false;
      }
                          
    }                       if(addIn != addIns[x] && addIn != "XXX"){
                              foundIt = false;
                               cout << "Sorry, we do not carry that. 111" << endl;
                               cout << "Enter coffee add-in or XXX to quit: ";
                                cin >> addIn;
                        //        cout << addIns[0] << endl;
                        //        cout << addIns[1] << endl;
                        //        cout << addIns[2] << endl;
                         //       cout << addIns[3] << endl;
                         //       cout << addIns[4] << endl;
                                }
                          else if(addIn == "XXX"){
                              cout << "This is the order total: " << orderTotal << endl;
                              cout << "This is the end of the program. " << endl; 
                              }
    }
    else if(addIn != addIns[x] && addIn != "XXX"){
      foundIt = false;
      cout << "Sorry, we do not carry that. 222" << endl;
      cout << "Enter coffee add-in or XXX to quit: ";
      cin >> addIn;
    }
    else if(addIn == "XXX"){
      cout << "This is the order total: " << orderTotal << endl;
      cout << "This is the end of the program. " << endl;
    }
   }



   return 0;
} // End of main() 