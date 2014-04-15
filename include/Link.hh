#ifndef LINK_hh
#define LINK_hh

using namespace std;

// Included classes

#include <vector>
#include <map>
#include <cstring>
#include <stdint.h>

class Link{
public:

  // Constructor
  Link(int, bool, int);
  
  // Destructor
  virtual ~Link();

  int getLinkID(){return LinkId;};
  
  void LoadBufIn(std::vector<int> &);
  void LoadBufOut(std::vector<int> &);
  
	
protected:
	
private:

  std::vector<int> bufferin;
  std::vector<int> bufferout;
  std::vector<int> physin;
  std::vector<int> physout;
  
  int LinkId;  	
  bool active;
  int format;
  
  // Local variables
};

#endif


