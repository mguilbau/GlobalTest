#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <string.h>
#include "Board.hh"

// Constructor
  Board::Board(int indexboard, int boardtype){
  BoardId=indexboard;
  
  vecChannel.clear();
  for (int i=0;i<myformat->GetNChan(BoardID,BoardType);i++){
    vecChannel.push_back(Channel(BoardID,BoardType,i,myformat->GetLinkId(i),myformat->GetFormat(i),myformat->GetRx(i),myformat->GetActive(i)));
  }  
 }

// Destructor
Board::~Board(){
}
