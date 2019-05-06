# the compiler: g++ for C++
CC = g++

# compiler flags:
# 	-g    adds debugging information to the executable file
# 	-Wall turn on most, but not all, compiler wartnings
CFLAGS = -g -Wall

TARGET = forloop numtest express formore bigstep block

all: $(TARGET)

forloop: forloop.cpp
	$(CC) forloop.cpp $(CFLAGS) -o forloop_main

numtest: numtest.cpp
	$(CC) numtest.cpp $(CFLAGS) -o numtest_main

express: express.cpp
	$(CC) express.cpp $(CFLAGS) -o express_main

formore: formore.cpp
	$(CC) formore.cpp $(CFLAGS) -o formore_main

bigstep: bigstep.cpp
	$(CC) bigstep.cpp $(CFLAGS) -o bigstep_main

forstr1: forstr1.cpp
	$(CC) forstr1.cpp $(CFLAGS) -o forstr1_main

plus_one: plus_one.cpp
	$(CC) plus_one.cpp $(CFLAGS) -o plus_one_main

block: block.cpp
	$(CC) block.cpp $(CFLAGS) -o block_main

forstr2: forstr2.cpp
	$(CC) forstr2.cpp $(CFLAGS) -o forstr2_main

equal: equal.cpp
	$(CC) equal.cpp $(CFLAGS) -o equal_main

clean:
	rm *_main
