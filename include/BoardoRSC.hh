#ifndef BOARDORSC_hh
#define BOARDORSC_hh

using namespace std;

// Included classes

#include <vector>
#include <map>
#include <cstring>
#include <stdint.h>
#include "Board.hh"

// RCT Crate class controls and monitors all cards plugged into it

class BoardoRSC: public Board{
public:

  // Constructor
  BoardoRSC(int indexboard);
  
  // Destructor
  virtual ~BoardoRSC();
  
  void configure();
  //void stop();
  //void reset();
  //void writeplayback();
  //void readplayback();
	  
	
protected:

private:
  // Local variable
	
};

#endif


