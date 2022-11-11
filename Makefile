main: main.o funcs.o coord3d.o
	g++ -o main main.o funcs.o coord3d.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o
	
funcs.o: funcs.cpp funcs.h coord3d.h

coord3d.o: coord3d.cpp coord3d.h

main.o: main.cpp funcs.h

tests.o: tests.cpp doctest.h funcs.h

clean:
	rm -f main funcs tests coord3d main.o funcs.o tests.o coord3d.o
