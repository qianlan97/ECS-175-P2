all: draw

clean:
	rm -f draw filemanipulation.o polygon.o transform.o projection.o

draw: main.cpp filemanipulation.h filemanipulation.cpp polygon.h polygon.cpp transform.h transform.cpp  projection.h projection.cpp
	g++ main.cpp filemanipulation.cpp polygon.cpp transform.cpp projection.cpp -lglut -lGL -o draw
