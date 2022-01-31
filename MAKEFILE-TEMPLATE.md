# A makefile template
SRC = main.cpp
OUT = out.bin
COMPILER = g++
C_FLAGS = 
L_FLAGS = 

all : $(SRC)
	$(COMPILER) $(SRC) $(CFLAGS) $(LFLAGS) -o $(OUT)
