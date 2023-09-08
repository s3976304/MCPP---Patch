# Variables
CXX = g++
AR = ar
CFLAGS = -I../include/mcpp -Wall

# Collect all source files and determine corresponding object files
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)

# Targets
all: libmcpp.a

$(OBJS): %.o: %.cpp
	$(CXX) -c $(CFLAGS) $< -o $@

libmcpp.a: $(OBJS)
	$(AR) rcs libmcpp.a $(OBJS)

clean:
	rm -f *.o *.a

.PHONY: all clean
