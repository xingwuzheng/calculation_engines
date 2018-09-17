#build an executable file name calc
all: src/*.cpp
	g++ -o calc src/*.cpp -std=c++11
clean: 
	rm -f calc
