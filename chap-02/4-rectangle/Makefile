CC=g++
CFLAGS=-c -Wall
LDFLAGS=

SOURCES=main.cpp Rectangle.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=rec

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)

