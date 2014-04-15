CXX=g++
CXXFLAGS=-Wall -g

tests/test :
	#$(CXX) $(CXXFLAGS) -I./include ./src/common/Board.cc ./src/common/BoardoRSC.cc ./src/common/Link.cc ./src/common/TestSystem.cc ./tests/tests.cc -o tests/tests
	$(CXX) $(CXXFLAGS) -I./include ./src/common/Board.cc ./src/common/Channel.cc ./src/common/TestSystem.cc ./tests/tests.cc -o tests/tests
