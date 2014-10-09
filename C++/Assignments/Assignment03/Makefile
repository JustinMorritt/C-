###########################
# Makefile for guessMyNumberV2 program
###########################

CPP = cl
CPP_FLAGS = -c -EHsc
LINK = link
LINK_FLAGS = /OUT: 
TARGET = guessMyNumberV2.exe
OBJ_FILES = guessMyNumberV2.obj randgen.obj

$(TARGET) : $(OBJ_FILES)
	$(LINK) $(LINK_FLAGS)$(TARGET) $(OBJ_FILES)

guessMyNumberV2.obj : guessMyNumberV2.cpp
	$(CPP) $(CPP_FLAGS) guessMyNumberV2.cpp

randgen.obj : randgen.cpp
	$(CPP) $(CPP_FLAGS) randgen.cpp

clean:
	del *.obj *.exe
	

