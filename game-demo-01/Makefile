# MAKEFILE
# --------
# Following a tutorial for compiling SDL2 projects from
# the command line; https://lazyfoo.net/../..
# Different macro names & comments.
# 
# Authored by brianc2788@gmail.com
# for "game-demo-01".

# Source files.
OBJS = game-demo-01.cpp

# Compiler args.
CC = g++
COMPILER_FLAGS = -w
#-w suppress warnings

# Linker args. Libraries to link against.
LINKER_FLAGS = -lSDL2

# Output.
OBJ_NAME = gamebin

# Make target.
all : $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)
