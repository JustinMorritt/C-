#############################################################################
# Makefile for building: SwordCrossbow program
#############################################################################

####### Compiler, tools and options

CXX           = cl
CXXFLAGS      = -EHsc -c -Od -W4
LINK          = link
LINKFLAGS     =  -OUT: 
TARGET        = swordCrossBow.exe

OBJECTS = main.obj Sword.obj Weapon.obj Crossbow.obj

$(TARGET) : $(OBJECTS)
	$(LINK) $(OBJECTS) $(LINKFLAGS)$(TARGET)
	
main.obj : main.cpp
	$(CXX) $(CXXFLAGS)  main.cpp 

Sword.obj : Sword.cpp
	$(CXX) $(CXXFLAGS)  Sword.cpp
	
Weapon.obj : Weapon.cpp
	$(CXX) $(CXXFLAGS)  Weapon.cpp
	
Crossbow.obj : Crossbow.cpp
	$(CXX) $(CXXFLAGS)  Crossbow.cpp

clean:
	del *.obj *.exe
