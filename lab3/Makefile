all: test show

test: test.cpp
	clang++ -Wall -Wno-write-strings -o test test.cpp LongList.cpp LongArray.cpp

show: show.cpp
	clang++ -Wall -Wno-write-strings -o show show.cpp LongList.cpp LongArray.cpp

clean:
	rm -r test
	rm -r show
