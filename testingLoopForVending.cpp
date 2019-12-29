#include <iostream>

using namespace std;

int main() {

	int x = 0;
	int const PEOPLE = 3;
	string peeps[PEOPLE] = {"Quantek", "Colek", "Umera"};
	string start;
	int peepNumber[PEOPLE] = {1,2,3};
	bool startFlag = false;
	string optionWho;

	cout << "Would you like to start? Type 'yes' or 'no' " << endl;
	cin >> start;

	if (start == "yes") {
		startFlag = true;
		cout << "This is what I have" << endl;
			for(x = 0; x < PEOPLE; x++) {
				cout << peepNumber[x] << ". " << peeps[x] << endl;
			}
			cout << "This is it." << endl;
			cout << "What would you like?" << endl;
			cin >> optionWho;
		/*	for(x = 0; optionWho != peeps[x]; x++){
				if(optionWho == ){
				- Work on making a search algorithm
					- Looking to see if optionWho is in peeps[PEOPLE]
				} 
			} */
	}
	else{
		cout << "This is the end of the program.";
	}
	
	cout << "This is the end of the program.";

	return 0;
}