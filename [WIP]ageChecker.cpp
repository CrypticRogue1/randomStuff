#include <iostream>
#include <string>

using namespace std;
int main(){
// So I started with something simple.
// Let's see if I can expand it into asking the user what do they think you stop being a kid, teen, and adult.
    // int userAge, kid = 14, teen = 20, adult= 100;
    int userAge, kid, teen, adult;
    int endOfProgram = 000;
    
    // Last worked on 10/20/19 at 11:10AM 
    // ----> NOTES FOR NEXT ALTERATION: Make it so that asking the age they consider would loop so it would 
    //                                  force the user to put the right information (integers). Also consider
    //                                  doing this same thing for when you ask what is your age.
    cout << "At what age do you consider a kid stops being a kid? ";
    cin >> kid;
    cout << "At what age do you consider a teen stops being a teen?";
    cin >> teen;
    cout << "At what age do you consider an adult being an elderly?";
    cin >> adult;

    cout << "Hello, what is your age? ";
    cin >> userAge;

    while(userAge != endOfProgram){
        if(userAge > adult){
            cout << "Damn man, where you at? " << endl;
            cout << "Please enter your age: ";
            cin >> userAge;
        }
        else{
            if(userAge < kid && userAge > 0){
                cout << "So, what are you up to today?" << endl;
                cout << "Please enter your age: ";
                cin >> userAge;
            }
            if(userAge <= teen && userAge >= kid){
                cout << "It'll be ok. Just keep pushing. :)" << endl;
                cout << "Please enter your age: ";
                cin >> userAge;
            }
            else if(userAge <= adult && userAge > teen){
                cout << "That's nice alright. Keep it going!" << endl;
                cout << "Please enter your age: ";
                cin >> userAge;
            }
        }
    }
    cout << "This is the end of the program." << endl;

    return 0;
}