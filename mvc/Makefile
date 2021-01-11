FLAGS = -pthread -g -std=c++1z -Wall -Wextra -pedantic -Wduplicated-cond -Wduplicated-branches -Wlogical-op -Wnull-dereference -Wrestrict -Wuseless-cast -Wformat=2

all: main

main: main.cpp model.h view.h controller.h
	g++ main.cpp $(FLAGS) -o mvc

.phony: clean
clean:
	rm -rf mvc
