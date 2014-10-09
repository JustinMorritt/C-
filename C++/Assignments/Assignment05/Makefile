###########################
# Makefile for fibonacci program
###########################

CPP = cl
CPP_FLAGS = -O2 -c -EHsc -W4
LINK = link
LINK_FLAGS = /OUT: 
TARGET = fibonacci.exe
OBJ_FILES = fibonacci.obj 

$(TARGET) : $(OBJ_FILES)
	$(LINK) $(LINK_FLAGS)$(TARGET) $(OBJ_FILES)

fibonacci.obj : fibonacci.cpp
	$(CPP) $(CPP_FLAGS) fibonacci.cpp

clean:
	del $(TARGET) $(OBJ_FILES)
	

