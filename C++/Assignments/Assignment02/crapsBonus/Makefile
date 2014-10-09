###########################
# Makefile for craps program
###########################

CPP = cl
CPP_FLAGS = -c -EHsc
LINK = link
LINK_FLAGS = /OUT: 
TARGET = crapsBonus.exe
OBJ_FILES = crapsBonus.obj randgen.obj

$(TARGET) : $(OBJ_FILES)
	$(LINK) $(LINK_FLAGS)$(TARGET) $(OBJ_FILES)

crapsBonus.obj : crapsBonus.cpp
	$(CPP) $(CPP_FLAGS) crapsBonus.cpp

randgen.obj : randgen.cpp
	$(CPP) $(CPP_FLAGS) randgen.cpp

clean:
	del *.obj *.exe
	

