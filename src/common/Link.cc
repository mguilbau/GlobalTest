#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <string.h>
#include "Link.hh"

// Constructor
  Link::Link(int myindex, int myactive, int myformat){
  LinkId=myindex;
  active=myactive;
  format=myformat;
}

// Destructor
Link::~Link(){
}

