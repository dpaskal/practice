FLAGS = -pthread -g -std=c++1z -Wall -Wextra -pedantic -Wduplicated-cond -Wduplicated-branches -Wlogical-op -Wnull-dereference -Wrestrict -Wuseless-cast -Wformat=2

all: maker taker middleman

middleman: book.proto
	protoc --cpp_out=. book.proto

maker: maker.cpp middleman
	g++ maker.cpp book.pb.cc -lprotobuf -pthread $(FLAGS) -o maker

taker: taker.cpp middleman
	g++ taker.cpp book.pb.cc -lprotobuf -pthread $(FLAGS) -o taker

clean:
	rm -rf maker taker book.pb*
