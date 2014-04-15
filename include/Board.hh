#ifndef BOARD_hh
#define BOARD_hh

using namespace std;

// Included classes

#include <vector>
#include <map>
#include <cstring>
#include <stdint.h>


// RCT Crate class controls and monitors all cards plugged into it

class Board{
public:

  // Constructor
  Board(int indexboard, int boardtype);
  
  // Destructor
  virtual ~Board();

  //Crate ID
  int getBoardID(){return BoardId;};
  int getBoardType(){return BoardType;};
  
  virtual void configure(){};
  //virtual void stop(){};
  //virtual void reset(){};
  //virtual void writeplayback(){};
  //virtual void readplayback(){};
	  
	
protected:
	int BoardId;
	int BoardType;
	
private:
  // Local variables
  std::vector<Channel> vecChannel;
  //void LoadTable();
  //std::vector<tentry> table;
	
};

#endif


