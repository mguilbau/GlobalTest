#ifndef CHANNEL_hh
#define CHANNEL_hh

using namespace std;

// Included classes

#include <vector>
#include <map>
#include <cstring>
#include <stdint.h>

class Channel{
public:

  // Constructor
  Channel(int,int,int,int,int,bool,bool);  //BoardID,BoardType,ChannelId,LinkId,Format,Rx,Active
  
  // Destructor
  virtual ~Channel();

  //Crate ID
    
  void LoadBuf(std::vector<int> &);
 	
protected:
	
private:

  std::vector<int> buffer;
  std::vector<int> phys;
  
  int BoardID;  	
  int BoardType;
  int ChannelId;
  int LinkId;
  int Format;
  bool tx;
  bool active;
  
  void FromPHtobuff();
  void FrombufftoPH();

  // Local variables
};

#endif


