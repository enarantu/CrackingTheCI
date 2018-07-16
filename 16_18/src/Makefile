CXX 	= g++
CXXFLAGS = -std=c++14 -Wconversion -Wall -Werror -Wextra -pedantic 

EXECUTABLE 	= main

all: clean $(EXECUTABLE)

$(EXECUTABLE):
	$(CXX) $(CXXFLAGS) -o $(EXECUTABLE) main.cpp 	solution.cpp

clean:
	rm -rf $(EXECUTABLE)