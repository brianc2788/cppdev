# Makefile template
# to help me remember stuff.
# to use, just rename makefile/Makefile
# in your directory and change the
# appropriate args...
SRC = main.cpp
OUT = out.bin
COMPILER = g++
#C_FLAGS = 
#L_FLAGS = 

all : $(SRC)
	$(COMPILER) $(SRC) -o $(OUT)
