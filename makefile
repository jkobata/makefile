PROG = exe
CC = g++
CPPFLAGS = -Wall -std=c++11
OBJS = main.o carro.o
$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)
carro.o :
	$(CC) $(CPPFLAGS) -c carro.cpp
main.o :
	$(CC) $(CPPFLAGS) -c main.cpp
clean.ubu:
	rm -f core $(PROG) $(OBJS)
clean.win:
	del $(PROG) $(OBJS)