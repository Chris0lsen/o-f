#ifndef GAMEOBJECTS_H
#define GAMEOBJECTS_H

namespace olsen{
	
	/*----------------------------------------------------------------------
     Requirement #16A: Demonstrate class
     ----------------------------------------------------------------------*/
    // Base class for difficulties
	class Game {
	public:
		
	private:
		
		
	}
	
	/*----------------------------------------------------------------------
     Requirement #24A: Demonstrate inheritance
     ----------------------------------------------------------------------*/
    class BeginnerGame : public Game {
	/*----------------------------------------------------------------------
     Requirement #24B: Demonstrate polymorphism
     ----------------------------------------------------------------------*/
		
	};

	class EasyGame : public Game {
		
	};
	
	class MediumGame : public Game {
		
		
	};
	
	class HardGame : public Game {
		
	};
}

#endif