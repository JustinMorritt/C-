###########################
# Makefile for list program
###########################

CPP = cl
CPP_FLAGS = -c -EHsc
LINK = link
LINK_FLAGS = /OUT: 
TARGET = list.exe
OBJ_FILES = main.obj list.obj

$(TARGET) : $(OBJ_FILES)
	$(LINK) $(LINK_FLAGS)$(TARGET) $(OBJ_FILES)

main.obj : main.cpp
	$(CPP) $(CPP_FLAGS) main.cpp

list.obj : list.cpp
	$(CPP) $(CPP_FLAGS) list.cpp	
	
clean:
	del -f *.obj *.exe
	

