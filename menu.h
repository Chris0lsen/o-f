#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <string>
using std::cin;
using std::string;

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
	 bool isValid(int x);
	 bool isValid(const char*);
	 bool isValid(string str);
		int GetSelection();
	private:
		
		
	}
	
	
	
	int Menu::GetSelection(){
		
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