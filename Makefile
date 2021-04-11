#Name of the project
PROJ_NAME=jogo

# .cpp files
SOURCE=$(wildcard ./source/*.cpp)

# .hpp files 
HEADERS=$(wildcard ./source/*.hpp)

#Object files
OBJ=$(subst .cpp,.o,$(subst source,objects,$(SOURCE)))

#Compiler
CC=g++

#Flags and compiler
CC_FLAGS=-c         \
		 -W         \
		 -Wall      \
		    		\
		 

#Flags sfml
SFML= -lsfml-graphics  \
	  -lsfml-window	   \
	  -lsfml-system

#Command used at clean target 
RM= rm -rf

#
#Compilation and linking
#
all: objFolder $(PROJ_NAME)

$(PROJ_NAME): $(OBJ)
	$(CC) $^ -o $@ $(SFML)

./objects/%.o: ./source/%.cpp ./source/%.hpp
	$(CC) $< $(CC_FLAGS) -o $@

./objects/main.o: ./source/main.cpp $(HEADERS)
	$(CC) $< $(CC_FLAGS) -o $@

objFolder:
	@mkdir -p objects

clean:
	@$(RM) ./objects/*.o $(PROJ_NAME) *~
	@rmdir objects

.PHONY: all clean
