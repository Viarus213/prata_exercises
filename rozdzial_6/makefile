# the compiler: g++ for C++
CC = g++

# compiler flags:
# 	-g    adds debugging information to the executable file
# 	-Wall turn on most, but not all, compiler wartnings
CFLAGS = -g -Wall

TARGET = if ifelse ifelseif or and more_and not cctypes condit switch enum jump

all: $(TARGET)

if: if.cpp
	$(CC) if.cpp $(CFLAGS) -o if_main

ifelse: ifelse.cpp
	$(CC) ifelse.cpp $(CFLAGS) -o ifelse_main

ifelseif: ifelseif.cpp
	$(CC) ifelseif.cpp $(CFLAGS) -o ifelseif_main

or: or.cpp
	$(CC) or.cpp $(CFLAGS) -o or_main

and: and.cpp
	$(CC) and.cpp $(CFLAGS) -o and_main

more_and: more_and.cpp
	$(CC) more_and.cpp $(CFLAGS) -o more_and_main

not: not.cpp
	$(CC) not.cpp $(CFLAGS) -o not_main

cctypes: cctypes.cpp
	$(CC) cctypes.cpp $(CFLAGS) -o cctypes_main

condit: condit.cpp
	$(CC) condit.cpp $(CFLAGS) -o condit_main

switch: switch.cpp
	$(CC) switch.cpp $(CFLAGS) -o switch_main

enum: enum.cpp
	$(CC) enum.cpp $(CFLAGS) -o enum_main

jump: jump.cpp
	$(CC) jump.cpp $(CFLAGS) -o jump_main


clean:
	rm *_main
