###########################
# Makefile for crapsBonus program FOR UNIX
###########################

CPP = g++
CPP_FLAGS = -c
LINK = g++
LINK_FLAGS = -o 
TARGET = crapsBonus
OBJ_FILES = crapsBonus.o randgen.o

$(TARGET) : $(OBJ_FILES)
	$(LINK) $(LINK_FLAGS)$(TARGET) $(OBJ_FILES)

crapsBonus.o : crapsBonus.cpp
	$(CPP) $(CPP_FLAGS) crapsBonus.cpp

randgen.o : randgen.cpp
	$(CPP) $(CPP_FLAGS) randgen.cpp


clean:
	rm -f *.o $(TARGET)
