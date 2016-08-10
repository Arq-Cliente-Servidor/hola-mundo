CC = g++ -std=c++11

all: hola

hola: hola.cc
		$(CC) -o hola hola.cc
