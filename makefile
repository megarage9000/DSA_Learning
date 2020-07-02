# https://dev.to/dmendoza99/how-to-write-a-good-makefile-for-c-32e3
CXX := g++
# We are using g++!
CXX_FLAGS := -Wall -Wextra -std=c++17 -ggdb
# Flags for compilation

BIN := bin
SRC := src
# our .cpp files location
INCLUDE := include
# our .h files location
LIB := lib
# precompiled libraries
LIBRARIES := 
# library flags for g++
EXECUTABLE := main
# name of our executable

all : $(BIN)/$(EXECUTABLE)

run : clean all
	@echo "Compiling and Executing"
	./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.cpp
	@echo "Building"
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) -L$(LIB) $^ -o $@ $(LIBRARIES)
	
# $@: The file name of the target of the rule
# $^: The names of all the prerequisites
# More information: https://www.gnu.org/software/make/manual/html_node/Automatic-Variables.html

clean:
	@echo "Cleaning"
	-rm $(BIN)/*