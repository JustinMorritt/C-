###########################
# Makefile for factors program
###########################

CPP = cl
CPP_FLAGS = -O2 -c -EHsc -W4
LINK = link
LINK_FLAGS = /OUT: 
TARGET = InventoryV3.exe
OBJ_FILES = InventoryV3.obj functions.obj

$(TARGET) : $(OBJ_FILES)
	$(LINK) $(LINK_FLAGS)$(TARGET) $(OBJ_FILES)

main.obj : InventoryV3.cpp
	$(CPP) $(CPP_FLAGS) InventoryV3.cpp

functions.obj : functions.cpp
	$(CPP) $(CPP_FLAGS) functions.cpp
 
clean:
	del $(TARGET) $(OBJ_FILES)
	

