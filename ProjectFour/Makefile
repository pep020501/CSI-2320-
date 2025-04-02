
CXX = g++
CXXFLAGS = -std=c++11 -Wall

TARGET = my_program.exe

all: $(TARGET)

$(TARGET): Main.o Clock.o
	$(CXX) $(CXXFLAGS) Main.o Clock.o -o $(TARGET)


Main.o: Main.cpp Clock.h
	$(CXX) $(CXXFLAGS) -c Main.cpp

Clock.o: Clock.cpp Clock.h
	$(CXX) $(CXXFLAGS) -c Clock.cpp

clean:
	rm -f *.o $(TARGET)
