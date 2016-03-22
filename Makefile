GXX = g++
GXXFLAGS = -Wall -g -std=c++11

EXEC = Zad3
OBJS = Zad3.o
LIBS = Zad3.h 

all: $(EXEC)

$(EXEC): $(OBJS) $(LIBS)
	$(GXX) $(OBJS) $(GXXFLAGS) -o $@

%.o: %.cpp $(LIBS)
	$(GXX) -c $< $(GXXFLAGS) -o $@

.PHONY: clear run val
clear:
	rm -f *.o $(EXEC)
run: $(EXEC)
	./$(EXEC)

val: $(EXEC)
	valgrind --leak-check=full ./$(EXEC)
