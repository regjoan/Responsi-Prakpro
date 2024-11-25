mergelists: mergelists.o
	g++ mergelists.o -o mergelists.exe

mergelists.o: mergelists.cpp
	g++ -c mergelists.cpp -o mergelists.o

run: mergelists
	./mergelists.exe

mergelists_test: mergelists_test.o
	g++ mergelists_test.o -o mergelists_test.exe

mergelists_test.o: mergelists_test.cpp
	g++ -c mergelists_test.cpp -o mergelists_test.o

test: mergelists_test
	./mergelists_test.exe

clean:
	rm -f mergelists.o mergelists_test.o mergelists.exe mergelists_test.exe