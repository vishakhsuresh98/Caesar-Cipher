CC = g++ -std=c++11

all: main.o encrypt.o decrypt.o
	$(CC) main.o encrypt.o decrypt.o
main.o: main.cpp encrypt.h decrypt.h
	$(CC) -c main.cpp	
encrypt.o: encrypt.cpp encrypt.h
	$(CC) -c encrypt.cpp 
decrypt.o: decrypt.cpp decrypt.h
	$(CC) -c decrypt.cpp
clean:
	rm a.out
	rm *.o
	rm ciphertext.txt