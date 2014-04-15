#ifndef FORMAT_hh
#define FORMAT_hh

using namespace std;

// Included classes

#include <vector>
#include <map>
#include <cstring>
#include <stdint.h>

class Format{
public:

  // Constructor
  Format(int, bool, int);
  
  // Destructor
  virtual ~Format();

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


