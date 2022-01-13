# for use with fltk-comp-test project.
# used 'fltk-config --ldflags' to get
# the linker args (similar to sdl-config).

SRC = fltk_test1.cpp
CC = g++
CFLAGS = -w #supress warnings
LFLAGS = -lfltk -lX11
FOUT = fltk_test1

all : $(SRC)
	$(CC) $(SRC) $(CFLAGS) $(LFLAGS) -o $(FOUT)
