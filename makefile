build:
	g++ -o Main Main.cpp -I./include -L. -lmcpp

debug:
	g++ -fdiagnostics-color=always -g -o Main Main.cpp -I./include -L. -lmcpp
	
run:
	./Main

all: build run
