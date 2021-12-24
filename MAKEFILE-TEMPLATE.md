# Makefile template
# to help me remember stuff.
SRC = main.cpp
OUT = out.bin
COMPILER = g++
#C_FLAGS = 
#L_FLAGS = 

all : $(SRC)
	$(COMPILER) $(SRC) -o $(OUT)
