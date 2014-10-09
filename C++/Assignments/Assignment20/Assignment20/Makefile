#############################################################################
# Makefile for building: words program
#############################################################################

####### Compiler, tools and options

CXX           = cl
CXXFLAGS      = -EHsc -c -Od -W4
LINK          = link
LINKFLAGS     =  -OUT: 
TARGET        =words.exe

OBJECTS = Main.obj

$(TARGET) : $(OBJECTS)
	$(LINK) $(OBJECTS) $(LINKFLAGS)$(TARGET)
	
cards.obj : Main.cpp
	$(CXX) $(CXXFLAGS)  Main.cpp 
	

clean:
	del $(OBJECTS) $(TARGET)
