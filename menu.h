#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <string>
using std::cin;
using std::string;
enum difficulty {beginner, easy, medium, hard};
	/*----------------------------------------------------------------------
     Requirement #18: Demonstrate namespace
     ----------------------------------------------------------------------*/
namespace olsen{
	class Menu {
	public:
	
		bool isValid();
	/*----------------------------------------------------------------------
     Requirement #08B: Demonstrate an overloaded function
     ----------------------------------------------------------------------*/
	 bool isValid(int x); //we should use this somewhere DUMBASS 
	 bool isValid(const char*);
	 bool isValid(string str);
	int GetSelection();
	private:
		
		
	};
	
	
	
	int Menu::GetSelection(){
		//declare variables 
		char choice;
	
		//ask the user what difficulty of game they want to play 
		cout << "Please select a difficulty for the game: (B)eginner, (E)asy, (N)ormal, (H)ard" << endl;
	
		/*----------------------------------------------------------------------
		Requirement #01B: Demonstrate simple input
		----------------------------------------------------------------------*/
		cin >> choice;
		
		if (this->isValid()){ //error catching 
			//Continue
		} else{
		/*----------------------------------------------------------------------
		Requirement #13: Demonstrate recursion
		----------------------------------------------------------------------*/
		//Recursively call until input is valid
			cout << "Please enter a valid choice." << endl << endl; 
			cin.clear();
			cin.ignore();
			this->GetSelection();
		}
		
	//add choice for quitting the game? DUMBASS 
		switch(choice) {
			case 'B':
				return beginner;
				//add break DUMBASS
			case 'E':
				return easy;
			case 'N':
				return medium;
			case 'H':
				return hard;
		}
	
		//should never get called
		return medium;
	}
	
    /*----------------------------------------------------------------------
     Requirement #07: Demonstrate a debugging trick
     ----------------------------------------------------------------------*/	
	bool Menu::isValid(){
	// Validate input for proper data type
		if (!cin){
			return false;
		}
	}
}

#endif