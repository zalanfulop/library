CXX = g++
# CXXFLAGS = -std=c++11 -02 -Wall -g
SOURCES = main.cpp Library.cpp Document.cpp Book.cpp Magazine.cpp
TARGET = library

$(TARGET) : $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)

#$(TARGET) is the target (in this case, library), and $(SOURCES) are the prerequ#isites (the source files needed to build the target).
#This line states that the target library depends on the files listed in $(SOURC#ES).
# Recipe:
# The indented line following the target and prerequisites is called the "recipe". It tells make how to build the target.
#Here, the recipe runs the g++ command with the specified flags to compile the s#ource files into the library executable.
