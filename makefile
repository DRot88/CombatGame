#CC will be compiler to use
#CFLAGS will be options to pass
#SOURCES will be cpp files
#OBJECTS will be .o files
#EXECUTABLE will be completed program
# -c creates object files/does not link
# -g for debugging information
# -Wall for all warnings
CC = g++
STD = -std=c++11
CFLAGS = -c -g -Wall
SOURCES = main.cpp menu.cpp battle.cpp creature.cpp barbarian.cpp vampire.cpp blue_men.cpp medusa.cpp harryPotter.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = combatGame


all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) $(STD) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm *o $(EXECUTABLE)