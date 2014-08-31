#ifndef GAMEOBJECTS_H
#define GAMEOBJECTS_H

#define BOARD_C 2
#define BOARD_R 5
#define ARRAYSIZE 10
#define BEGIN_LEN 4
#define EASY_LEN 5
#define MEDIUM_LEN 6
#define HARD_LEN 8

#include <string>
#include <iostream>
#include <algorithm>
#include <cstdlib>
using std::cin;
using std::cout;
using std::endl;
using std::string;

namespace olsen{
	
	/*----------------------------------------------------------------------
     Requirement #16A: Demonstrate class
     ----------------------------------------------------------------------*/
    // Base class for difficulties
	class Game {
	public:
		//declare board size 
		//string? DUMBASS 
		 Game();
		~Game();
		/*----------------------------------------------------------------------
		Requirement #14A: Demonstrate a multi-dimensional array
		----------------------------------------------------------------------*/
		string board[BOARD_R][BOARD_C];
		char randC[10] = {'<', '&', ']', ';', '%', '@', '+','#', '^','{'};
		bool turn(string*, string); 
		string guessWord(string*);
		void play(string*, string);
		/*----------------------------------------------------------------------
		Requirement #16B: Demonstrate struct
		----------------------------------------------------------------------*/
		struct iWord{
			char letter;
			/*----------------------------------------------------------------------
			Requirement #17B: Demonstrate pointer to struct
    `		 ----------------------------------------------------------------------*/
			iWord* next;
		};
    
	private:
		
		
	};
	
	/*----------------------------------------------------------------------
     Requirement #24A: Demonstrate inheritance
     ----------------------------------------------------------------------*/
    class BeginnerGame : public Game {
		public:
	/*----------------------------------------------------------------------
     Requirement #24B: Demonstrate polymorphism
     ----------------------------------------------------------------------*/
		void play(string*, string);
		bool turn(string*, string);
		 BeginnerGame();
		~BeginnerGame();
	};

	class EasyGame : public Game {
		public:
		 EasyGame();
		~EasyGame();
	};
	
	class MediumGame : public Game {
		public:
		 MediumGame();
		~MediumGame();
	};
	
	class HardGame : public Game {
		public:
		 HardGame();
		~HardGame();
	};
}

#endif