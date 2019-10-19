#include <iostream>
#include <string>
using namespace std;

int main() {

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

  
    for(x = 0; x < NUM_ITEMS; x++){
      if(addIn != "XXX"){
        if(addIn != "XXX" && addIn == addIns[x]){
          // TEST foundIt = false;
            // TEST cout << addIn << "1"<< endl;
            while(addIn == addIns[x]){
                foundIt = true;
                cout << "The price for " << addIns[x] << " = " << addInPrices[x] << endl;
                orderTotal = orderTotal + addInPrices[x];
                   
                   if(foundIt == true){
                     foundIt = false;
                     cout << "Enter coffee add-in or XXX to quit: ";
                   cin >> addIn;
                   } 
                  else if(addIn != "XXX" && foundIt == false){
              cout << "Sorry, this is not served here." << endl;
              cout << "Enter coffee add-in or XXX to quit: ";
              cin >> addIn;
                }
         
            }
//            else{
  //              cout << "Banana " << addIns[x] << endl;
    //        }
         //   if(foundIt = false){
      //          cout << "This is the "
        }
        else if(addIn == "XXX" && foundIt == false){;
            cout << "The total price is: $" << orderTotal << endl;
            cout << "This is the end of the program." << endl;
            foundIt = true;
            } 
            }
                /*
                else if(foundIt = false){
                    cout << "The total price is: " << (orderTotal = orderTotal + addInPrices[x]) << endl;
                    cout << "This is the end of the program. ";
                }     
             else if(addIn != "XXX"){
                cout << "Sorry, we do not carry that." << endl;
                cout << "Enter coffee add-in or XXX to quit: ";
                cin >> addIn;
            } */
    //    cout << "The total price is: $" << 
    //    (orderTotal = orderTotal + addInPrices[x]) << endl; 
     //   cout << "This is the end of the program." << endl;
   }
    
     else if(addIn == "XXX"){
            cout << "This is the order total: " << orderTotal;
            cout << "This is the end of the program." << endl;
           // foundIt = true;
            }       
  




return 0;
}
