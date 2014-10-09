###########################
# Makefile for guessMyNumberV2 program FOR UNIX
###########################

CPP = g++
CPP_FLAGS = -c
LINK = g++
LINK_FLAGS = -o 
TARGET = guessMyNumberV2
OBJ_FILES = guessMyNumberV2.o randgen.o

$(TARGET) : $(OBJ_FILES)
	$(LINK) $(LINK_FLAGS)$(TARGET) $(OBJ_FILES)

guessMyNumberV2.o : guessMyNumberV2.cpp
	$(CPP) $(CPP_FLAGS) guessMyNumberV2.cpp

randgen.o : randgen.cpp
	$(CPP) $(CPP_FLAGS) randgen.cpp


clean:
	rm -f *.o $(TARGET)
