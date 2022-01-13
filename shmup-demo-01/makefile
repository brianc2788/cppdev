# makes the shmup1 demo.
SRC = shmup_main.cpp engine1.cpp engine1.h
CC = g++
CFLAGS = -w #suppress warnings
LFLAGS = -lSDL2 -lSDL2_image -lSDL2_ttf
FOUT = shmup1.exe

all : $(SRC)
	$(CC) $(SRC) $(CFLAGS) $(LFLAGS) -o $(FOUT)