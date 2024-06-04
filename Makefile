#OBJS specifies which files to compile as part of the project
OBJS = Game.cpp

CC = g++
COMPILER_FLAGS = -w
LINKER_FLAGS = -lSDL2

#OBJ_NAME specifies the name of our exectuable
OBJ_NAME = game

#This is the target that compiles our executable
all : $(OBJS)
	g++ $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)
	./game
