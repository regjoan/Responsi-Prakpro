palindrome: palindrome.o
	g++ palindrome.o -o palindrome.exe

palindrome.o: palindrome.cpp
	g++ -c palindrome.cpp -o palindrome.o

run: palindrome
	./palindrome.exe

palindrome_test: palindrome_test.o
	g++ palindrome_test.o -o palindrome_test.exe

palindrome_test.o: palindrome_test.cpp
	g++ -c palindrome_test.cpp -o palindrome_test.o

test: palindrome_test
	./palindrome_test.exe

clean:
	rm -f palindrome.o palindrome_test.o palindrome.exe palindrome_test.exe