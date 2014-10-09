###########################
# Makefile for craps program FOR UNIX
###########################

CPP = g++
CPP_FLAGS = -c
LINK = g++
LINK_FLAGS = -o 
TARGET = craps
OBJ_FILES = craps.o randgen.o

$(TARGET) : $(OBJ_FILES)
	$(LINK) $(LINK_FLAGS)$(TARGET) $(OBJ_FILES)

craps.o : craps.cpp
	$(CPP) $(CPP_FLAGS) craps.cpp

randgen.o : randgen.cpp
	$(CPP) $(CPP_FLAGS) randgen.cpp


clean:
	rm -f *.o $(TARGET)
